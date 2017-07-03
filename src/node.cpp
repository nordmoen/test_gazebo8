#include "ros/ros.h"
#include "gazebo_msgs/LinkStates.h"

void callback(const gazebo_msgs::LinkStates& states) {
	ROS_INFO_THROTTLE(1, "Got link_states!");
}

int main(int argc, char** argv) {
	ros::init(argc, argv, "test_gazebo8_node");
	ros::NodeHandle nh("~");
	ros::AsyncSpinner spinner(4);
	spinner.start();
	ROS_INFO("Starting 'test_gazebo8_node'");

	// Wait for Gazebo to start
	ROS_DEBUG("Waiting for Gazebo to start");
	if(ros::service::waitForService("/gazebo/get_world_properties", 10)) {
		ROS_INFO("Gazebo started. Starting loop");
		ros::Duration wait(5);
		for(int i = 0; i < 5; ++i) {
			ROS_INFO("Starting iteration %i", i);
			auto sub = nh.subscribe("/gazebo/link_states", 5,
				callback);
			wait.sleep();
			sub.shutdown();
			ROS_INFO("Ending iteration %i", i);
		}
		ROS_INFO("Ending 'test_gazebo8_node'");
	} else {
		ROS_FATAL("Gazebo never advertised service!");
		return 1;
	}
}
