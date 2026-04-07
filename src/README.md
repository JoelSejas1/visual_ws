README: Examen Robotica

Este repositorio contiene la implementación de tres ejercicios prácticos utilizando ROS 2 Jazzy: dos sistemas de cinemática inversa para robots manipuladores y un sistema de procesamiento de datos de sensores mediante nodos y mensajes personalizados.
Ejercicio 1: Robot A (3 DOF)

Este robot es un manipulador de 3 grados de libertad que opera en el espacio 3D. El sistema calcula automáticamente los ángulos de las articulaciones necesarios para que la punta del robot alcance una coordenada específica (x, y, z) definida por el usuario.
Limites de operacion

    Eje X: -4.5 a 4.5

    Eje Y: -4.5 a 4.5

    Eje Z: 0.0 a 4.5

Ejecucion

Terminal 1: Visualizacion y URDF

Bash

cd ~/robotica/visual_ws
source /opt/ros/jazzy/setup.bash
colcon build
source install/setup.bash
ros2 launch robot_description robot_a.launch.py

Esta terminal inicializa el launch del Robot A, es decir, el visualizer.

Terminal 2: Nodo de cinematica inversa

Bash

cd ~/robotica/visual_ws
source /opt/ros/jazzy/setup.bash
colcon build
source install/setup.bash
ros2 run visual_pubsub inverse

Esta terminal tiene la finalidad de visualizar el error, determinante jacobianna, la posicion actual y la posicion objetivo, se actualiza tambien en funcion de un cambio dado por la terminal 3.

Terminal 3: Envio de objetivo

Bash

cd ~/robotica/visual_ws
source /opt/ros/jazzy/setup.bash
colcon build
source install/setup.bash
ros2 topic pub --once /target_position geometry_msgs/msg/Point "{x: 2, y: 2, z: 2}"

Puede variar los datos de traslacion (x,y,z) para que el robot llegue a otra parte del plano, con los limites establecidos previamente.

Ejercicio 2: Robot Bio-Inspirado (4 DOF)

Este manipulador posee 4 articulaciones y está diseñado para realizar movimientos en un plano 2D (XY). Al tener más articulaciones de las estrictamente necesarias para el plano, el robot es redundante, lo que le permite alcanzar objetivos con mayor flexibilidad.
Limites de operacion

    Alcance maximo radial: 23.0 unidades (Suma de eslabones 10 + 6 + 4 + 3)

    Plano de trabajo: XY (Z debe mantenerse en 0)

Ejecucion

Terminal 1: Visualizacion y URDF
Bash

cd ~/robotica/visual_ws
source /opt/ros/jazzy/setup.bash
colcon build
source install/setup.bash
ros2 launch robot_description robotbio.launch.py

Esta terminal inicializa el launch del RobotBio, es decir, el visualizer.


Terminal 2: Nodo de cinematica inversa
Bash

cd ~/robotica/visual_ws
source /opt/ros/jazzy/setup.bash
colcon build
source install/setup.bash
ros2 run visual_pubsub inversebio

Esta terminal tiene la finalidad de visualizar el error, determinante jacobianna, la posicion actual y la posicion objetivo, se actualiza tambien en funcion de un cambio dado por la terminal 3.

Terminal 3: Envio de objetivo
Bash

cd ~/robotica/visual_ws
source /opt/ros/jazzy/setup.bash
colcon build
source install/setup.bash
ros2 topic pub --once /target_position geometry_msgs/msg/Point "{x: 3, y: 15, z: 0}"

Puede variar los datos de traslacion (x,y,z) para que el robot llegue a otra parte del plano, con los limites establecidos previamente, en este caso z siempre tendra que ser 0.

Ejercicio 3: Sistema de Sensores (Nodos)

Consiste en una red de 5 nodos. Tres nodos generan valores aleatorios (sensores), un cuarto nodo recibe estos datos para promediarlos utilizando una interfaz de mensaje personalizada, y un quinto nodo muestra el resultado final. Todos los procesos se ejecutan de forma sincronizada a una frecuencia constante.
Ejecucion

Terminal Unica
Bash

cd ~/robotica/visual_ws
source /opt/ros/jazzy/setup.bash
colcon build
source install/setup.bash
ros2 launch robot_description sensores_promedio.launch.py

Esta terminal inicializa todos los nodos en ordena al mismo tiempo, valores de 3 sensores randomicos, un promediador y transmisor, y finalmente un receptor que actua como dashboard.