//
// Created by tobias on 02.05.21.
//

#include <iostream>
#include <cmath>
#include "aufgabe1a.h"

void start1a(){
    double number;
    std::cout << "Geben Sie eine Gleitkommazahl >= 0 ein:";
    std::cin >> number;
    std::cout << std::endl;
    auto result = std::sqrt(number);
    std::cout << "Die Quadratwurzel von " << number <<" ist "<< result << std::endl;
}