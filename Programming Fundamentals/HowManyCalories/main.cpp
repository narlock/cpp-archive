/*
 * Assignment 3, Question 1 (How many calories) - Working with input and output
 * Write a C++ program that asks the user to input how many cookies they ate, 
 * then reports how many total calories were consumed.
 * 
 * By: Anthony Narlock
 * 
 * Process: Define constant integers
 *          User will enter how many cookies they ate
 *          Program will output the inputted value,
 *          Program will calculate how many calories the user ate
 *                  Program calculates how many calories are in a single cookie
 *                  Then use that number to calculate calories
 *          Program will print how many calories the user consumed.
 */

#include <iostream>
using namespace std;

int main() {
    
    //Defining constant integers
    const int COOKIES_PER_BAG = 28, SERVINGS_PER_BAG = 10, CALORIES_PER_SERVING = 300;
    
    //Defining non-constant variables 
    int cookies_ate; 
    double calories_consumed, servings_per_cookie, calories_per_cookie;
    
    //User will enter how many cookies they ate
    cout << "How many cookies did you eat? ";
    cin >> cookies_ate;
    
    //Program will calculate how many calories the user ate
    servings_per_cookie = static_cast<double>(SERVINGS_PER_BAG) / COOKIES_PER_BAG; //calculates how many servings per single cookie 
    calories_per_cookie = CALORIES_PER_SERVING * servings_per_cookie;
    
    calories_consumed = cookies_ate * calories_per_cookie;
    cout << "You have consumed " << calories_consumed << " calories." << endl;
    
    return 0;
    
   
}

