cmake_minimum_required(VERSION 2.8.3)
project(octomap_catkin_gtest_example)

add_compile_options(
    $<$<CXX_COMPILER_ID:GNU>:-std=c++14>
)

find_package(catkin REQUIRED COMPONENTS
    octomap_ros
)

find_package(octomap REQUIRED)

add_definitions(-DOCTOMAP_NODEBUGOUT)

###################################
## catkin specific configuration ##
###################################

catkin_package(
    INCLUDE_DIRS ${OCTOMAP_INCLUDE_DIRS}
    LIBRARIES ${OCTOMAP_LIBRARIES}
    CATKIN_DEPENDS octomap_ros
    DEPENDS octomap
)

###########
## Build ##
###########

include_directories(
    include
    ${catkin_INCLUDE_DIRS}
    ${OCTOMAP_INCLUDE_DIRS}
)

add_library(${PROJECT_NAME}_lib
    "src/octomap_catkin.cpp"
)

target_link_libraries(${PROJECT_NAME}_lib
    ${catkin_LIBRARIES}
    ${OCTOMAP_LIBRARIES}
)

#############
## Install ##
#############

install(TARGETS ${PROJECT_NAME}_lib
    LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
)

install(DIRECTORY include/${PROJECT_NAME}/
    DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
    FILES_MATCHING PATTERN "*.h"
    PATTERN ".git" EXCLUDE
)

#############
## Testing ##
#############

if(CATKIN_ENABLE_TESTING)

    catkin_add_gtest(${PROJECT_NAME}_test
        test/octomap_catkin_test.cpp
    )
    
    target_link_libraries(${PROJECT_NAME}_test
        ${catkin_LIBRARIES}
        ${OCTOMAP_LIBRARIES}
        ${PROJECT_NAME}_lib
    )
endif()
