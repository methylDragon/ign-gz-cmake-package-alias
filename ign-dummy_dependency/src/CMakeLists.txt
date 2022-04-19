ign_get_libsources_and_unittests(sources gtest_sources)

ign_create_core_library(SOURCES ${sources} CXX_STANDARD ${c++standard})

ign_add_executable(dummy_hello hello_exec.cpp)
target_link_libraries(dummy_hello ignition-dummy_dependency${IGN_DUMMY_DEPENDENCY_VER})

ign_build_tests(TYPE UNIT SOURCES ${gtest_sources})

install(
  TARGETS dummy_hello
  DESTINATION ${CMAKE_INSTALL_PREFIX}/bin
)
