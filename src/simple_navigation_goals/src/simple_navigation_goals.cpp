#include <ros/ros.h>
#include <move_base_msgs/MoveBaseAction.h>
#include <actionlib/client/simple_action_client.h>

typedef actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> MoveBaseClient;

int main(int argc, char** argv) {
  ros::init(argc, argv, "simple_navigation_goals");

  //tell the action client that we want to spin a thread by default
  MoveBaseClient ac("move_base", true);

  //wait for the action server to come up
  while(!ac.waitForServer(ros::Duration(5.0))){
    ROS_INFO("Waiting for the move_base action server to come up");
  }

  move_base_msgs::MoveBaseGoal goal;

  
  for (int i = 13; i <30; i++) {


    ROS_INFO("%d/36 disinfection start", i);

      //we'll send a goal to the robot to move 0.38 meter forward
    goal.target_pose.header.frame_id = "base_link";
    goal.target_pose.header.stamp = ros::Time::now(); 

    ROS_INFO("the base will moved 38 centimeter in x direction");

    goal.target_pose.pose.position.x = 0.38;
    goal.target_pose.pose.orientation.w = 1.0;

    ROS_INFO("Sending goal");
    ac.sendGoal(goal);

    ac.waitForResult();

    if(ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED)
      ROS_INFO("The base moved 38 centimeter forward");
    else
      ROS_INFO("The base failed to move forward 38 centimeter for some reason");

    ROS_INFO("disinfecting...");
    ros::Duration(1).sleep(); // 소독부 메커니즘 작동하는동안 대기
  }

  return 0;
}
