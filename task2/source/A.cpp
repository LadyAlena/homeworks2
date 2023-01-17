#include "A.h"
#include <iostream>

// синтаксическая ошибка: вместо оператора разрешения видимости "::" стоит двоеточие ":" на 7 строчке
// семантическая ошибка: при вызове конструктора выводится сообщение, что вызван деструктор на 9 строчке

nameA:A::A(int a) { 
    this->a = a;
    std::cout << "Destructor A" << std::endl; 
}

// исправленный код

/*
nameA::A::A(int a) { 
    this->a = a; 
    std::cout << "Constructor A" << std::endl; 
}
*/

nameA::A::~A() { std::cout << "Destructor A" << std::endl; }
int nameA::A::get_value_a() { return a; }