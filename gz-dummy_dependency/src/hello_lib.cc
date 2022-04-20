#include <iostream>
#include <ignition/dummy_dependency/hello_lib.h>

void ignition::dummy::hello() {
    std::cout << "\n\n== Hello world! ==\n\n";
}
