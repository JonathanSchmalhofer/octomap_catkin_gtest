#include "octomap_catkin_gtest_example/octomap_catkin.h"
#include <stdlib.h>
#include <iostream>

namespace OCTOMAP_CATKIN
{

OctomapCatkin::OctomapCatkin()
    : octree_(NULL)
{
    octree_ = new octomap::OcTree(kresolution_octomap);
}

OctomapCatkin::~OctomapCatkin()
{
    if(octree_ != NULL)
    {
        delete octree_;
    }
}

octomap::OcTree* OctomapCatkin::GetOcTree()
{
    return octree_;
}

}  // namespace OCTOMAP_CATKIN
