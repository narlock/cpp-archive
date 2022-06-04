/* Using Pointers
 * By: Anthony Narlock
 * 
 * Write a program that does the following.  Declare three int variables in main(): var1, var2, var3.  
 * Other than this declaration statement, there should only be three other statements in main.  
 * These should be function calls to the the functions getValues, doubleValues, and displayValues.  
 * getValues should input integers from the user into var1, var2 and var3.  doubleValues should double the values in var1, var2 and var3.  
 * displayValues should display the values in var1, var2 and var3.  Do not use global variables.  
 * Do not use reference variables.  Use pointer variables but only where needed.
 *
 */

#include <iostream>
using namespace std;

void getValues(int *var1, int *var2, int *var3);
void doubleValues(int *var1, int *var2, int *var3);
void displayValues(int var1, int var2, int var3);

/*
 * Function: main
 * Summary: Calls getValues, doubleValues, and displayValues
 * Parameters: none
 * Returns: integer when complete
 * Preconditions: none
 * Postconditions: n/a      
 */

int main() {
    int var1, var2, var3;
   
    getValues(&var1,&var2,&var3);
    doubleValues(&var1,&var2,&var3);
    displayValues(var1,var2,var3);
    
    return 0;
}

/*
 * Function: getValues
 * Summary: Asks user to enter var1,var2, and var3
 * Parameters: memory location of var1,var2, and var3
 * Returns: n/a
 * Preconditions: none
 * Postconditions: n/a      
 */

void getValues(int *var1, int *var2, int *var3) {

    cout << "Enter an integer: ";
    cin >> *var1;
       
    cout << "Enter an integer: ";
    cin >> *var2;
    
    cout << "Enter an integer: ";
    cin >> *var3;
}

/*
 * Function: doubleValues
 * Summary: doubles the values of var1, var2, and var3
 * Parameters: memory location of var1, var2, and var3
 * Returns: n/a
 * Preconditions: none
 * Postconditions: n/a      
 */

void doubleValues(int* var1, int* var2, int* var3) {
    *var1 = (*var1) + (*var1);
    *var2 = (*var2) + (*var2);
    *var3 = (*var3) + (*var3);
    
}

/*
 * Function: displayValues
 * Summary: displays the values of var1, var2, and var3
 * Parameters: int var1, var2, and var3
 * Returns: n/a
 * Preconditions: none
 * Postconditions: n/a      
 */

void displayValues(int var1, int var2, int var3) {
    cout << "The values doubled are: \n";
    cout << var1 << " " << var2 << " " << var3 << endl;
    
}