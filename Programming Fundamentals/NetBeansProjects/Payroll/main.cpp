/*
 * Payroll
 * By: Anthony Narlock
 * 
 * Write a program that uses the following arrays:
 *  - empId: an array of seven long integers to hold employee identification numbers.
 *  - hours: an array of seven integers to hold the number of hours worked by each employee
 *  - payRate: an array of seven doubles to hold each employee's hourly pay rate
 *  - wages: an array of seven doubles to hold each employee's gross wages
 * 
 * The program should relate the data in each array through subscripts. For example, the number
 * in element 0 of the hours array should be the number of hours worked to the employee whose
 * identification number is stored in element 0 of the empId array. That same employee's pay rate
 * should be stored in element 0 of the payRate array.
 * 
 * The program should display each employee number and ask the user to enter that employee's hours and
 * pay rate. It should then calculate the gross wages for that employee (hours times pay rate) and store
 * them in the wages array. After the data has been entered for all the employees, the program should
 * display each employee's identification number and gross wages.
 * 
 * Input Validation: Do not accept negative values for hours.
 * Skipping Input validation for 15.00 an hour for pay-rate.
 */

#include <iostream>
#include <iomanip>
using namespace std;

/* Function: main
 * Summary: Prompts user to enter in payrate and hours for employees, then displays wages of employees.
 * Parameters: none
 * Returns: integer on completion of program
 * Preconditions: none
 * Postconditions: for loop cycles through array to enter hours worked and pay rate
 *                  for loop to calculate wage
 *                   for loop to easily display final output
 */

int main() {
    //Declare size and array variables
    const int SIZE = 7;
    long int empId[SIZE] = {5658845,4250125,7895122,8777541,8451277,1302850,7580489};
    int hours[SIZE];
    double payrate[SIZE], wages[SIZE];
    
    //Title, and for loop to enter hours worked pay rate of all employees
    cout << "Enter the requested information for each employee.";
    for(int i = 0; i < SIZE; i++) {
        cout << "\nEmployee #" << empId[i] << endl;
        cout << "Hours worked: ";
        cin >> hours[i];
        
        while(hours[i] < 0) {
            cout << "Hours worked must be a positive number!\nHours worked: ";
            cin >> hours[i];
        }
        
        cout << "Pay rate: $";
        cin >> payrate[i];
    }
    
    //for loop to Calculate each employee's gross wage
    for(int i = 0; i < SIZE; i++) {
        wages[i] = hours[i] * payrate[i];
    }
    
    //for loop for final input
    cout << "----------------------------\nEmployee\t\tWages\n----------------------------\n";
    for(int i = 0; i < SIZE; i++) {
        cout << "Employee #" << empId[i] << " $  " << setprecision(2) << fixed << right << wages[i] << endl;
    }
    
    return 0;
}