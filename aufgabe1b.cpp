//
// Created by tobias on 05.05.21.
//

#include <iostream>
#include "aufgabe1b.h"
void start1b(){
    double number;
    std::cout << "Geben Sie eine Gleitkommazahl >= 0 ein:";
    std::cin >> number;
    auto start = number;
    auto result = (number + start / number) / 2.0;
    result = (result + start / result) / 2.0;
    result = (result + start / result) / 2.0;
    result = (result + start / result) / 2.0;
    result = (result + start / result) / 2.0;
    result = (result + start / result) / 2.0;
    result = (result + start / result) / 2.0;
    result = (result + start / result) / 2.0;
    std::cout << std::endl;
    std::cout << "Die Quadratwurzel von " << number <<" ist "<< result << std::endl;
}

