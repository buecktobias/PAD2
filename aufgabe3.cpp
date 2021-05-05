//
// Created by tobias on 05.05.21.
//

#include <iostream>
#include <cmath>
#include "aufgabe3.h"

void start3(){
    int n;
    std::cout << "Wie viele Nummern willst du eingeben?: ";
    std::cin >> n;
    std::cout << std::endl;
    std::cout << "Gebe die Nummern ein! ";
    std::vector<double> numbers;
    for(int i = 0; i < n; i++){
        double newNumber;
        std::cin >> newNumber;
        numbers.push_back(newNumber);
    }
    std::cout << "Der Median ist: " << median(numbers) << std::endl;
}
double median(std::vector<double> numbers){
    std::sort(numbers.begin(), numbers.end());
    if(numbers.size() % 2 == 0){
        int lowerIndex = std::round((numbers.size() / 2) - 1);
        int upperIndex = lowerIndex + 1 ;
        return (numbers[lowerIndex] + numbers[upperIndex]) / 2.0;
    }else{
        int middleElement = std::ceil(numbers.size() / 2);
        return numbers[middleElement];
    }
}