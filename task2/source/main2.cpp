#include <iostream>
#include "A.h"

int main(int argc, char** argv) {

    nameA::A a(5);

    std::cout << "a = " << a.get_value_a() << std::endl;

    return 0;
}