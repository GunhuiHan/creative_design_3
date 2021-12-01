#include <ros/ros.h>
#include <move_base_msgs/MoveBaseAction.h>
#include <actionlib/client/simple_action_client.h>

typedef actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> MoveBaseClient;

double handle_distance = 0.028;
double line_distance = 1.0;

// def disinfectionFunction(data) {}


// def moveFunction(data) {
//   //tell the action client that we want to spin a thread by default
//   MoveBaseClient ac("move_base", true);
//   //wait for the action server to come up
//   while(!ac.waitForServer(ros::Duration(5.0))){
//     ROS_INFO("Waiting for the move_base action server to come up");
//   }
//   move_base_msgs::MoveBaseGoal goal;
//   //we'll send a goal to the robot to move 1 meter forward
//   goal.target_pose.header.frame_id = "base_link";
//   goal.target_pose.header.stamp = ros::Time::now();

//   int handle_num_for_line = 12;
//   int line_num_for_volume = 3;
//   int volume_num_for_train = 10;

  // for (int i = 0; i <line_num_for_volume; i++) {
  //   ROS_INFO("%d line disinfection start", i);

  //   for (int num = 0; num < handle_num_for_line; num++) {

  //     goal.target_pose.pose.position.y = handle_distance; // 현재 위치에서 28cm 직선주행
  //     goal.target_pose.pose.orientation.w = 1.0; // 목표점에서 로봇의 orientation
  //     ROS_INFO("%i handle disinfecting..." , num);
  //     ac.sendGoal(goal); // 자율주행 명령어
  //     ac.waitForResult();
  //     ros::Duration(6)).sleep(); // 소독부 메커니즘 작동하는동안 대기
  //     disinfectionFunction(); // 소독부 메커니즘 작동
  //   }

  //   goal.target_pose.pose.position.y = line_distance; 
  //   goal.target_pose.pose.orientation.w = 1.0; 
  //   ROS_INFO("%i handle disinfecting..." , num);
  //   ac.sendGoal(goal);
  //   ac.waitForResult();
  // }

  // if(ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED)
  //   ROS_INFO("success");
  // else
  //   ROS_INFO("The base failed to move for some reason");
// }

int main(int argc, char** argv){
  ros::init(argc, argv, "covid_robot_waypoints_line");
  ros::NodeHandle n;
  //ros::Subscriber sub = n.subscribe("disinfection", String, moveFunction);
  return 0;
}
