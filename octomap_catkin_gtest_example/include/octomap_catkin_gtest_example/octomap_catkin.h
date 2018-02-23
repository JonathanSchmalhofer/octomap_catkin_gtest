#ifndef OCTOMAP_CATKIN_GTEST_EXAMPLE_OCTOMAP_CATKIN_H
#define OCTOMAP_CATKIN_GTEST_EXAMPLE_OCTOMAP_CATKIN_H

#include <octomap/octomap.h>
#include <octomap_ros/conversions.h>

namespace OCTOMAP_CATKIN
{

class OctomapCatkin
{
public:
    OctomapCatkin();
    ~OctomapCatkin();

    /// @brief Returns a pointer to the OcTree.
    octomap::OcTree* GetOcTree();
private:
    /// @brief An example OcTree so this class is not entirely empty.
    octomap::OcTree* octree_;

    /// @brief Resolution of octomap
    const double kresolution_octomap = 1.0f;
};

}  // namespace OCTOMAP_CATKIN

#endif // OCTOMAP_CATKIN_GTEST_EXAMPLE_OCTOMAP_CATKIN_H
