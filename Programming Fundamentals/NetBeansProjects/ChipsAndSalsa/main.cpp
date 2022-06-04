/*
 * Chips and Salsa
 * By: Anthony Narlock
 * 
 * Write a program that lets a maker of chips and salsa keep track of sales for five
 * different types of salsa: mild, medium, sweet, hot, and zesty. The program should
 * use two parallel 5 element arrays: an array of strings that holds the five salsa
 * names, and an array of integers that holds the numbers of jars sold during the past
 * month for each salsa type. The salsa numbers should be stored using an initialization
 * list at the time the name array is created. 
 * 
 * The program should prompt the user to enter the number of jars sold for each type.
 * Once this sales data has been entered, the program should produce a report that displays
 * sales for each salsa type, total sales, and the names of the highest selling and
 * lowest selling products.
 * 
 * Input validation: do NOT accept negative values for numbers of jars sold.
 */

#include <iostream>
#include <string>
using namespace std;

int getTotal(int array[], int SIZE);
int indexOfHighest(int array[], int SIZE);
int indexOfLowest(int array[], int SIZE);

/* Function: main
 * Summary: The program prompts user to enter in values into an array, sales report displays and functions are called to return total sales, highest and lowest seller
 * Parameters: none
 * Returns: integer on completion of program
 * Preconditions: none
 * Postconditions: for loop cycles through array, checks if entered number is positive or zero
 */

int main() {
    //Declare variables
    const int SIZE = 7;
    int sales[SIZE];
    string types[] = {"mild","medium","sweet","hot","zesty","mango","spicy"};
    
    //For loop that asks user to enter values of jar sales
    for(int i = 0; i < SIZE; i++) {
        cout << "Jars sold last month of " << types[i] << ": ";
        cin >> sales[i];
        
        //Argument: jars sold must be a positive value; repeat enter until positive
        while(sales[i] < 0) {
            cout << "Jars sold must a positive value!\nJars sold for last month of " << types[i] << ": ";
            cin >> sales[i];
        }
    }
    
    //output report
    cout << "\nSalsa Sales Report\n\n";
    cout << "High Seller: " << types[indexOfHighest(sales,SIZE)] << endl;
    cout << "Low Seller: " << types[indexOfLowest(sales,SIZE)] << endl;
    
    cout << "\nName: Jars Sold\n_______________________\n";
    
    //display individual sales
    for(int i = 0; i < SIZE; i++) {
        cout << types[i] << ": " << sales[i] << endl;
    }
    
    //call functions to display total sales, high seller, low seller
    cout << "\nTotal Sales: " << getTotal(sales,SIZE) << endl;
    
    
    return 0;
}

/* Function: getTotal
 * Summary: gets total of jar sales
 * Parameters: integer array, integer size
 * Returns: integer
 * Preconditions: must be called through other function
 * Postconditions: for loop cycles through array and adds numbers to total
 */

int getTotal(int array[], int SIZE) {
    int total = 0;
    for(int i = 0; i < SIZE; i++) {
        total += array[i];
    }
    return total;
}

/* Function: indexOfHighest
 * Summary: Cycles through given array and returns the largest values index
 * Parameters: integer array, size of array
 * Returns: integer 
 * Preconditions: must be called through other function
 * Postconditions: for loop which cycles through array comparing them, finding the largest valued index
 */

int indexOfHighest(int array[], int SIZE) { 
    int largestIndex = 0;
    int largest = array[0];
    for(int i = 0; i < SIZE; i++) {
        if(array[i] > largest) {
            largest = array[i];
            largestIndex = i;
        }
    }
    return largestIndex;
}

/* Function: indexOfHighest
 * Summary: Cycles through given array and returns the lowest values index
 * Parameters: integer array, size of array
 * Returns: integer 
 * Preconditions: must be called through other function
 * Postconditions: for loop which cycles through array comparing them, finding the lowest valued index
 */

int indexOfLowest(int array[], int SIZE) { 
    int smallestIndex = 0;
    int smallest = array[0];
    for(int i = 0; i < SIZE; i++) {
        if(array[i] < smallest) {
            smallest = array[i];
            smallestIndex = i;
            
        }
    }
    return smallestIndex;
}