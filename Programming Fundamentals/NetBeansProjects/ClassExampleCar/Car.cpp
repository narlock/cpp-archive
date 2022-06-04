/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Car.h"
#include <iostream>

Car::Car(int y, string mk, string mod) : Car(y, mk, mod, 0) {}

Car::Car(int in_year, string in_model, string in_make, int in_speed) {
    year = in_year;
    model = in_model;
    make = in_make;
    speed = in_speed;
}

int Car::getYear() const {
    return year;
}

// Returns the make of the car. make 
//YOU DONT NEED THE CAR:: YOU CAN GET RID OF IT AS LONG AS IT IS LOCATED IN THIS FILE
string Car::getMake() const {
    return make;
}


string Car:: getModel() const {
    return model;
}

//Speed is guarenteed to never be below zero
int Car::getSpeed() const {
    return speed;
}


void Car::setYear(int y) {
    if (y < 1885 || y > 2020) {
        cout << "Car year must be between 1885 and 2020\n";
    } else {
        year = y;
    }
}


void Car::setMake(string m) {
    make = m;
}


void Car::setModel(string m) {
    model = m;
}


void Car::setSpeed(int s) {
    if (s < 0) {
        cout << "Car speed must be greater than or equal to 0\n";
    } else {
        speed = s;
    }
}

// Increase the speed attribute by 5 mph
void Car::accelerate() {
    speed += 5;
}

void Car::accelerate(int mph) {
    speed += mph;
}

// Decrease tge speed attribute by 5 mph, guarenteed to never go below 0
void Car::brake() {
    speed -= 5;
    if (speed < 0) {
        speed = 0;
    }
}

void Car::brake(int mph) {
    speed -= mph;
    if (speed < 0) {
        speed = 0;
    }
}