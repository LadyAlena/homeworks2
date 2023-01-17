#include "A.h"
#include <iostream>

// nameA:A::A() { std::cout << "Destructor A" << std::endl; } - синтаксическая ошибка, семантическая ошибка
nameA::A::A(int a) { 
    this->a = a; 
    std::cout << "Destructor A" << std::endl; 
}
nameA::A::~A() { std::cout << "Destructor A" << std::endl; }
int nameA::A::get_value_a() { return a; }