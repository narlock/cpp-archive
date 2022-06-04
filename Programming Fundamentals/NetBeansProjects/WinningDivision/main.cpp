/*
 * Winning Division
 * By: Anthony Narlock
 * 
 * Write a program that determines which of a company's four divisions (Northeast, Southeast, Northwest, and Southwest)
 * had the greatest sales for a quarter. IT should include the following two functions, which are called by main.
 *      double getSales() is passed the name of a division. It asks the user for a division's quarterly sales figure, validates 
 *      the input, then returns it. It should be called once for each division.
 * 
 *      void findHighest() is passed the four sales totals. It determines which is the largest and prints the name of the high grossing
 *      division, along with its sales figure.
 * 
 * Input validation: do not accept dollar amounts less than #0.00.
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/* Function: getSales
 * Summary: Prompts user for quarterly sales, returns that number
 * Parameters: string division
 * Preconditions: must be called from another function with an entered string
 * Postconditions: if the division sales entered is less than 0, it will ask user to re-input value.
 * 
 */

double getSales(string division) {
    //declare variables
    double division_sales;
    
    //prompt user for division sales
    cout << "Enter the quarterly sales figure for the " << division << " Division: ";
    cin >> division_sales;
    
    //while argument if sales < 0
    while(division_sales <= 0) {
        cout << "The Division sales must be greater than zero!\n"
                "Enter the quarterly sales figure for the " << division << " Division: ";
        cin >> division_sales;
    }
    return division_sales;
}

/* Function: findHighest
 * Summary: using the given parameters, determines which double is the highest and outputs result
 * Parameters: 4 doubles: double for southwest, double for northwest, double for southeast, double for north east.
 * Preconditions: function getSales must first to obtain double values
 * Postconditions: using if/ifelse/else statements to compare values
 */

void findHighest(double sw, double nw, double se, double ne) {
    //compare given four values and return based off highest
    if(sw > nw && sw > se && sw > ne)
        cout << "The Southwest division had the highest sales this quarter.\n"
                "That division's sales were: $" << setprecision(2) << fixed << sw;
    else if(nw > sw && nw > se && nw > ne)
        cout << "The Northwest division had the highest sales this quarter.\n"
                "That division's sales were: $" << setprecision(2) << fixed << nw;
    else if(se > sw && se > nw && se > ne)
        cout << "The Southeast division had the highest sales this quarter.\n"
                "That division's sales were: $" << setprecision(2) << fixed << se;
    else if(ne > sw && ne > nw && ne > se)
        cout << "The Northeast division had the highest sales this quarter.\n"
                "That division's sales were: $" << setprecision(2) << fixed << ne;
    else
        cout << "MORE THAN ONE DIVISION HAD THE SAME HIGHEST VALUE.\n";
}

/*
 * Function: main
 * Summary: Calls the functions to ultimately display final output.
 * Parameters: none
 * Returns: integer when program needs have been met
 * Preconditions: none
 * Postconditions: calls getSales, and findHighest
 *          
 */


int main() {
    //call functions
    double sw = getSales("Southwest");
    double nw = getSales("Northwest");
    double se = getSales("Southeast");
    double ne = getSales("Northeast");
    findHighest(sw,nw,se,ne);
    
    return 0;
}