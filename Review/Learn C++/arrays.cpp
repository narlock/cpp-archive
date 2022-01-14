/* 
 * Title: Structured Data & Iterating
 * Author: Anthony Narlock
 *
 * Structs, Arrays, For/While loop
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/*
 * An Abstract Data Type are data types that are created by the
 * programmer. They have their own range of data and their
 * own sets of operations that may be performed on them.
 * 
 * We are use a structure in C++ to combine data into a data type.
 * For example, if we wanted to create abstraction for an Employee, the
 * data we want to store inside of the structure would contain attributes
 * of an employee. Perhaps their employeeNumber, name, hoursPerWeek,
 * payRate, and grossPay.
 * 
 * We can store this information using a structure, we define a structure
 * struct <tag> {
 *      <attribute declarations>
 * };
 */

//Employee struct
struct Employee {
    int number;
    string name;
    double hoursPerWeek;
    double payRate;
    double grossPay;
};

/*
 * This struct essentially acts as a blueprint for individual employees.
 * We can define an employee in our main function and store and retrieve
 * the specific employee's attributes.
 */

int main() {
    
    //Defining an employee
    Employee employee1;
    
    //Let's use cin to get the attributes of this employee
    //This could simulate a form of some sort if we used a user interface
    cout << "Enter employee number: ";
    cin >> employee1.number;
    
    cout << "Enter the employee's name: ";
    cin.ignore(); //Skips remaining '\n' character
    getline(cin, employee1.name);
    
    /*
     * We can continue to gather the attributes of an 
     * Employee in this way, but we will skip this for obvious reasons
     */
    
    //print employee information
    cout << "Employee No. " << employee1.number << "\nName: " << employee1.name << endl;
    
    /*
     * Arrays
     * 
     * An array allows you to store and work with multiple values of the same
     * data type.
     * 
     * In C++, we initialize an array:
     * <data-type> <name_of_array>[<size of array>];
     * 
     * To get predefined values in initialization list
     * <data-type> <name_of_array>[<size of array>] = {val1, val2, ... , valn};
     * 
     * To access specific elements, we denote by their superscript
     * <name_of_array>[index] -> that specific number
     * We can assign with the assignment operator.
     */
    
    //Initializing an array
    const int SIZE = 5;
    int randomNumbers[SIZE];
    randomNumbers[0] = 14;
    randomNumbers[1] = 45;
    randomNumbers[2] = 23;
    randomNumbers[3] = 98;
    randomNumbers[4] = 42;
    
    //Initializing another array
    int otherNumbers[SIZE] = {4,5,6,7,8};
    
    /*
     * For and While loops
     * 
     * Probably already familiar with them, but I like to throw
     * this in the introduction to arrays, as it is very
     * convenient to iterate over an array and do something with
     * that data.
     * 
     * For loop
     * for(<index> = <starting-index>; <end condition>; <iteration change>) { block }
     * 
     * While loop
     * while(<condition>) { block }
     */
    
    //Iterating over an array
    for(int i = 0; i < SIZE; i++) {
        cout << "Index " << i << " = " << randomNumbers[i] << endl;
    }
    
    //Using a while loop for the lols
    int index = 0;
    while(index != 5) {
        cout << "Index " << index << " = " << otherNumbers[index] << endl;
        index++;
    }
    
    return 0;
}

