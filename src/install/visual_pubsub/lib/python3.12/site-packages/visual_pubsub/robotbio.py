import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from geometry_msgs.msg import Point
import numpy as np

from robot_description.srv import EndEffectorPosition

class InverseKinematicsBioRobot(Node):

    def __init__(self):
        super().__init__('ik_bio_robot')
        self.joint_pub = self.create_publisher(JointState, 'joint_states', 10)
        self.target_sub = self.create_subscription(Point, 'target_position',
                                                   self.target_callback, 10)

        self.l1, self.l2, self.l3, self.l4 = 10.0, 6.0, 4.0, 3.0

        self.q = np.array([0.1, 0.1, 0.1, 0.1]) 

        self.target_pos = np.array([24.0, 0.0]) 
        
        self.timer = self.create_timer(0.1, self.update_joints)

        self.step_size = 0.05
        self.tolerance = 0.01
        self.damping_factor = 0.05

    def forward_kinematics(self, q):
        q1, q2, q3, q4 = q
        x = (self.l1 * np.cos(q1) + self.l2 * np.cos(q1 + q2) + 
             self.l3 * np.cos(q1 + q2 + q3) + self.l4 * np.cos(q1 + q2 + q3 + q4))
        y = (self.l1 * np.sin(q1) + self.l2 * np.sin(q1 + q2) + 
             self.l3 * np.sin(q1 + q2 + q3) + self.l4 * np.sin(q1 + q2 + q3 + q4))
        return np.array([x, y])

    def jacobian(self, q):
        q1, q2, q3, q4 = q
        j11 = (-self.l1*np.sin(q1) - self.l2*np.sin(q1+q2) - 
               self.l3*np.sin(q1+q2+q3) - self.l4*np.sin(q1+q2+q3+q4))
        j12 = (-self.l2*np.sin(q1+q2) - self.l3*np.sin(q1+q2+q3) - 
               self.l4*np.sin(q1+q2+q3+q4))
        j13 = -self.l3*np.sin(q1+q2+q3) - self.l4*np.sin(q1+q2+q3+q4)
        j14 = -self.l4*np.sin(q1+q2+q3+q4)
        j21 = (self.l1*np.cos(q1) + self.l2*np.cos(q1+q2) + 
               self.l3*np.cos(q1+q2+q3) + self.l4*np.cos(q1+q2+q3+q4))
        j22 = (self.l2*np.cos(q1+q2) + self.l3*np.cos(q1+q2+q3) + 
               self.l4*np.cos(q1+q2+q3+q4))
        j23 = self.l3*np.cos(q1+q2+q3) + self.l4*np.cos(q1+q2+q3+q4)
        j24 = self.l4*np.cos(q1+q2+q3+q4)

        return np.array([[j11, j12, j13, j14], [j21, j22, j23, j24]])

    def target_callback(self, msg):
        self.target_pos = np.array([msg.x, msg.y])

    def update_joints(self):
        current_pos = self.forward_kinematics(self.q)
        error_vec = self.target_pos - current_pos
        error_norm = np.linalg.norm(error_vec)
        
        J = self.jacobian(self.q)

        det_j = np.linalg.det(J @ J.T)

        print("-" * 30)
        print(f"TARGET  : {self.target_pos}")
        print(f"CURRENT : {np.round(current_pos, 3)}")
        print(f"ERROR   : {round(error_norm, 4)}")
        print(f"DET(J*J^T)  : {round(det_j, 5)}")

        if error_norm > self.tolerance:
            J_inv = np.linalg.pinv(J, rcond=self.damping_factor)
            dq = J_inv @ error_vec
            self.q += dq * self.step_size

        msg = JointState()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['q1', 'q2', 'q3', 'q4'] 
        msg.position = self.q.tolist()
        self.joint_pub.publish(msg)

def main():
    rclpy.init()
    node = InverseKinematicsBioRobot()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()