/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: antho
 *
 * Created on October 15, 2019, 11:31 AM
 */
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

double calcVolume(double side) {
     return pow(side,3);
}

double calcVolume(double radius, double height) {
    const double PI = 3.1415926535;
    return PI * pow(radius,2) * height;
}

double calcVolume(double length, double depth, double height) {
    return length * depth * height;
}

int main() {
    
    cout << calcVolume(5) << endl;
    cout << calcVolume(2,2) << endl;
    cout << calcVolume(2,3,5) << endl;

    
    return 0;
}