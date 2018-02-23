# octomap_catkin_gtest
Minimal example for a ros node that can be built with catkin tools (i.e. catkin build) and run GTests.

## Dependencies

The following are required in order to build this project (in case any are missing, any help in completing the list is highly appreciated):

* cmake >= 2.8.0
* ros kinetic
* python catkin tools
* octomap for ros

To install all needed dependencies on Ubuntu 16.04, run the following code blocks.

For ROS Kinetic Kame (also see ros.org for this):
```{.sh}
sudo apt-get update && \
sudo apt-get install -y ros-kinetic-desktop-full && \
rosdep update && \
sudo echo "source /opt/ros/kinetic/setup.bash" >> ~/.bashrc && \
sudo source ~/.bashrc && \
sudo source /opt/ros/kinetic/setup.bash
```

For the remaining dependencies (catkin tools, octomap, ...):
```{.sh}
sudo apt-get install -y python-catkin-tools && \
sudo apt-get install -y python-rosinstall python-rosinstall-generator python-wstool build-essential && \
sudo apt-get install -y ros-kinetic-octomap* && \
sudo apt-get install -y python-rospkg && \
sudo apt-get update
```

## Cloning correctly into a workspace

To be able to use `catkin build`, the sources must be placed in workspace. For this, we will create a folder with the workspace name `my_workspace` in our home folder (as an example) and add a subfolder named `src`. Into this subfolder we then simply clone this repository. That's it!
```{.sh}
mkdir -p ~/my_workspace/src
cd ~/myworkspace/src
git clone https://github.com/JonathanSchmalhofer/octomap_catkin_gtest.git
```

## Building

Run `catkin build` in the main directory to build all packages included in this repository including `octomap_catkin_gtest_example`.

```{.sh}
cd ~/my_workspace
catkin build
```

## Run Tests

Run `catkin run_tests` in the main directory of the workspace and use `catkin_test_results` to get a summary of all tests.

```{.sh}
cd ~/my_workspace
catkin run_tests && catkin_test_results
```
