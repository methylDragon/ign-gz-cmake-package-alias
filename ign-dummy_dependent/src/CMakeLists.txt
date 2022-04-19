ign_get_libsources_and_unittests(sources gtest_sources)

ign_add_executable(dependent_dummy_hello hello_exec.cpp)
target_link_libraries(dependent_dummy_hello ignition-dummy_dependency1)
target_include_directories(dependent_dummy_hello
  PRIVATE
  ${ignition-dummy_dependency${IGN_DUMMY_DEPENDENCY_VER}_INCLUDE_DIRS}
)

ign_build_tests(TYPE UNIT SOURCES ${gtest_sources})

install(
  TARGETS dependent_dummy_hello
  DESTINATION ${CMAKE_INSTALL_PREFIX}/bin
)
