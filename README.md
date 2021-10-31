# creative_design_3

# commands
# gazebo (custom)
roslaunch covid_robot_gazebo covid_subway.launch

# teleop (turtlebot3 package)
export TURTLEBOT3_MODEL=waffle
roslaunch turtlebot3_teleop turtlebot3_teleop_key.launch

# slam (turtlebot3 package)
export TURTLEBOT3_MODEL=waffle
roslaunch turtlebot3_slam turtlebot3_slam.launch slam_methods:=gmapping


# covid_robot urdf location
covid_robot_description/urdf/covid_robot.urdf
