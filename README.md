# cocobot simulation product for creative design 3 class in yonsei university
# Final presentation
[1분반_1조_3차발표.pdf](https://github.com/GunhuiHan/creative_design_3/files/9205741/1._1._3.pdf)

# commands
# gazebo (custom)
roslaunch covid_robot_gazebo covid_subway.launch

# teleop (turtlebot3 package)
export TURTLEBOT3_MODEL=waffle
roslaunch turtlebot3_teleop turtlebot3_teleop_key.launch

# slam (turtlebot3 package)
export TURTLEBOT3_MODEL=waffle
roslaunch turtlebot3_slam turtlebot3_slam.launch slam_methods:=gmapping

# navigation (turtlebot3 package)

# waypoints driving

# covid_robot urdf location
covid_robot_description/urdf/covid_robot.urdf

SLAM
![그림1](https://user-images.githubusercontent.com/53965977/179646467-5ae0dcfe-09d2-4d4a-8670-bbb3435b4509.png)


https://user-images.githubusercontent.com/53965977/179646897-7671b8e5-68bf-4b99-be12-c4e856b979de.mp4



Waypoint
![그림2](https://user-images.githubusercontent.com/53965977/179646473-3df4eb62-49ca-406e-bbe7-5623d03d2abf.png)
<img width="266" alt="그림3" src="https://user-images.githubusercontent.com/53965977/179646484-944f260a-c842-4d44-b3e5-33362bf3654e.png">

https://user-images.githubusercontent.com/53965977/179646563-ef5249a5-d6b0-4d99-bddd-adccdccc6ee9.mp4

