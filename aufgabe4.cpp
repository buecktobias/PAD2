//
// Created by tobias on 05.05.21.
//

#include "aufgabe4.h"
/*

nickname.cpp
yymmdd-OSk

Liest einen Nickname ("Spitznamen") und das Geburtsjahr ein,
gibt die beiden eingelesenen Werte wieder aus.
06 */
#include <iostream>
// E/A-Stroeme aus der StdLib
using std::cin;
// using-Deklaration fuer cin aus std
using std::cout;
// using-Deklaration fuer cout aus std
#include <string>
#include <vector>
// Zeichenketten aus der StdLib
using std::string;
// using-Deklaration fuer string aus std

/*
 * */
void start4() {
    int ix;
    int iy;
    int iz;
    cout << "Geben Sie die Zahlen ein: ";
    cin >> ix >> iy >> iz;
    cout << std::endl;
    cout << "Die Summe ist: " << ix + iy + iz << std::endl;
    cout << "Das Produkt ist: " << ix * iy * iz << std::endl;
    cout << "Die Beiden Differenzen: " << ix - iy << " " << iy -iz << std::endl;
    if (iy == 0 || iz == 0){
        cout << "Die Qutienten dürfen nicht 0 sein !" << std::endl;
    }else {
        cout << "Die Beiden Quotienten: " << (double) ix / iy << " " << (double) iy / iz << std::endl;
    }
    std::vector<int> numbers = {ix, iy, iz};
    std::sort(numbers.begin(), numbers.end());
    cout << "Die Nummern aufsteigend: ";
    for(auto num: numbers){
        cout << " " << num;
    }
}
