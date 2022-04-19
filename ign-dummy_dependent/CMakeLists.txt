cmake_minimum_required(VERSION 3.10.2 FATAL_ERROR)
project(ignition-dummy_dependent1 VERSION 1.0.0)

#============================================================================
# Find ignition-cmake
#============================================================================
# If you get an error at this line, you need to install ignition-cmake
find_package(ignition-cmake3 REQUIRED)

#============================================================================
# Configure the project
#============================================================================
set(c++standard 17)
ign_configure_project(VERSION_SUFFIX)

#============================================================================
# Find dependencies
#============================================================================
ign_find_package(wow VERSION 1.0.0 REQUIRED)
# ign_find_package(ignition-dummy_dependency1 VERSION 1.0.0 REQUIRED)
# ign_find_package(gz-dummy_dependency1 VERSION 1.0.0 REQUIRED)
set(IGN_DUMMY_DEPENDENCY_VER ${ignition-dummy_dependency1_VERSION_MAJOR})

#============================================================================
# Configure the build
#============================================================================
ign_configure_build(QUIT_IF_BUILD_ERRORS)

#============================================================================
# Create package information
#============================================================================
ign_create_packages()
