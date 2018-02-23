#include <gtest/gtest.h>
#include "octomap_catkin_gtest_example/octomap_catkin.h"

namespace OCTOMAP_CATKIN
{

TEST(OctomapCatkin, Dummy)
{
    OctomapCatkin my_class;
    EXPECT_EQ(1, 1);
}

TEST(OctomapCatkin, Initialize)
{
    OctomapCatkin my_class;
    EXPECT_TRUE(my_class.GetOcTree() != NULL);
}

TEST(OctomapCatkin, CheckResolution)
{
    OctomapCatkin my_class;
    EXPECT_EQ(my_class.GetOcTree()->getResolution(), 1.0f);
}

}  // namespace OCTOMAP_CATKIN

// Run all the tests that were declared with TEST()
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}