//
// Created by tobias on 02.05.21.
//

#include <stdexcept>
#include <functional>
#include <cmath>
#include <iostream>
#include "aufgabe2.h"

void start2(){
    double num1;
    double num2;
    char c_op;
    std::cout << "Operation: ";
    std::cin >> c_op >> num1 >> num2;
    double result = operation(c_op, num1, num2);
    std:: cout << std::endl << "Ergebnis: " << result << std::endl;
}

double operation(char operation, double num1, double num2){
    switch(operation){
        case '+': return addition(num1, num2);
        case '-': return subtraction(num1, num2);
        case '*': return multiplication(num1, num2);
        case '/': return division(num1, num2);
        default:
            throw std::invalid_argument("received invalid operator!");
    }
}
double addition(double num1, double num2){
    return num1 + num2;
}
double subtraction(double num1, double num2){
    return num1 - num2;
}
double multiplication(double num1, double num2){
    return num1 * num2;
}
double division(double num1, double num2){
    return num1 / num2;
}
