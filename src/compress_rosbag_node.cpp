#include <ros/ros.h>

#include <boost/foreach.hpp>

#include <rosbag/bag.h>
 #include <string>

int main(int argc, char** argv)
{
  ros::init(argc, argv, "compress_rosbag");
  ros::NodeHandle nh("~");

  std::string filename, cmd;
 

  ROS_INFO("Starting compression");

  nh.getParam("file", filename);


  cmd = "rosbag compress " + filename + " --output-dir=compressed output.bag";
  system(cmd.c_str());

    
 

  ros::spin();
}
