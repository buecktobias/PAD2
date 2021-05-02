//
// Created by tobias on 02.05.21.
//
#include <iostream>
#include "aufgabe1b.h"

void start1b(){
    double number;
    int times = 50;
    std::cout << "Geben Sie eine Gleitkommazahl >= 0 ein:";
    std::cin >> number;
    auto result = sqrt(number, times);
    std::cout << std::endl;
    std::cout << "Die Quadratwurzel von " << number <<" ist "<< result << std::endl;
}
double sqrt(double num, int times) {
    return sqrt(num,times, num);
}
double sqrt(double num, int times, double start){
    if(times <= 0){
        return num;
    }else{
        double result = (num + start / num) / 2.0;
        times--;
        return sqrt(result, times, start);
    }
}