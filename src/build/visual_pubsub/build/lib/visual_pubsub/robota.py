import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from geometry_msgs.msg import Point
import numpy as np

class InverseKinematicsRobotA(Node):

    def __init__(self):
        super().__init__('ik_robot_a')
        self.joint_pub = self.create_publisher(JointState, 'joint_states', 10)
        self.target_sub = self.create_subscription(Point, 'target_position',
                                                   self.target_callback, 10)

        self.L = 1.5
        self.l1 = 3.0  
        self.l2 = 1.5  
        self.l3 = 1.5  

        self.q = np.array([0.1, -0.4, -0.4]) 
        self.target_pos = np.array([1.5, 2.5, 3.5]) 
        
        self.timer = self.create_timer(0.1, self.update_joints)

        self.step_size = 0.05 
        self.tolerance = 0.01
        self.damping_factor = 0.1 

    def forward_kinematics(self, q):
        t1, t2, t3 = q
        x = self.l2 * np.cos(t1) * np.cos(t2) + self.l3 * np.cos(t1) * np.cos(t2 + t3)
        y = self.l2 * np.sin(t1) * np.cos(t2) + self.l3 * np.sin(t1) * np.cos(t2 + t3)
        z = -self.l2 * np.sin(t2) - self.l3 * np.sin(t2 + t3) + self.l1
        return np.array([x, y, z])

    def jacobian(self, q):
        t1, t2, t3 = q
        s1, c1 = np.sin(t1), np.cos(t1)
        s2, c2 = np.sin(t2), np.cos(t2)
        s23, c23 = np.sin(t2 + t3), np.cos(t2 + t3)

        j11 = -s1 * (self.l2 * c2 + self.l3 * c23)
        j12 = c1 * (-self.l2 * s2 - self.l3 * s23)
        j13 = c1 * (-self.l3 * s23)

        j21 = c1 * (self.l2 * c2 + self.l3 * c23)
        j22 = s1 * (-self.l2 * s2 - self.l3 * s23)
        j23 = s1 * (-self.l3 * s23)

        j31 = 0.0
        j32 = -self.l2 * c2 - self.l3 * c23
        j33 = -self.l3 * c23

        return np.array([[j11, j12, j13], [j21, j22, j23], [j31, j32, j33]])

    def target_callback(self, msg):
        self.target_pos = np.array([msg.x, msg.y, msg.z])

    def update_joints(self):
        current_pos = self.forward_kinematics(self.q)
        error_vec = self.target_pos - current_pos
        error_norm = np.linalg.norm(error_vec)
        
        J = self.jacobian(self.q)
        det_j = np.linalg.det(J)

        print("-" * 30)
        print(f"TARGET POS   : {self.target_pos}")
        print(f"CURRENT POS  : {np.round(current_pos, 3)}")
        print(f"ERROR NORM   : {round(error_norm, 4)}")
        print(f"DET(JACOBIAN): {round(det_j, 5)}")

        if error_norm > self.tolerance:
            J_inv = np.linalg.pinv(J, rcond=self.damping_factor)
            dq = J_inv @ error_vec
            
            self.q += dq * self.step_size

        msg = JointState()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['q1', 'q2', 'q3'] 
        msg.position = self.q.tolist()
        self.joint_pub.publish(msg)

def main():
    rclpy.init()
    node = InverseKinematicsRobotA()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()