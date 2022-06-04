/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Car.h
 * Author: antho
 *
 * Created on December 10, 2019, 11:08 AM
 */

#ifndef CAR_H
//include guard, allows it so the car class is not used more than once
#define CAR_H
#include <string>
using namespace std;

//The class Car represents a car object
class Car {
    private:
        int year;
        string make;
        string model;
        int speed;
    public:
        //Constructor
        Car(int y, string mk, string mod);
        Car(int in_year, string in_model, string in_make, int in_speed);
        // (getter) member functions/methods 
        int getYear() const;
        string getMake() const;
        string getModel() const;
        int getSpeed() const;
        
        // mutator (setter) member functions/methods
        void setYear(int y);
        void setMake(string m);
        void setModel(string m);
        void setSpeed(int s);
        
        // other member functions
        void accelerate();
        void accelerate(int mph);
        void brake();       
        void brake(int mph);
};

#endif /* CAR_H */

