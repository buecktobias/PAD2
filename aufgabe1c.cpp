//
// Created by tobias on 02.05.21.
//
#include <iostream>
#include "aufgabe1c.h"
#include <cmath>

void start1c(){
    long double number, accuracy;
    std::cout << "Geben Sie eine Gleitkommazahl >= 0 ein:";
    std::cin >> number;
    std::cout << std::endl <<  "Geben Sie eine Genauigkeit ein: ";
    std::cin >> accuracy;
    auto result = sqrt(number, accuracy);
    std::cout << std::endl;
    std::cout << "Die Quadratwurzel von " << number <<" ist "<< result << std::endl;
    std::cout << "Die Quadratwurzel mit cmath ist "<< std::sqrt(number) << std::endl;
}
long double sqrt(long double num, long double accuracy) {
    return sqrt(num, accuracy, num);
}
long double sqrt(long double num, long double accuracy, long double start){
    long double result = (num + start / num) / 2.0;
    if (std::abs(result - num)  < accuracy){
        return result;
    }
    return sqrt(result, accuracy, start);
}