/*
 * Write a program that asks for the month, the year, 
 * and the total amount collected at the cash register (i.e. sales plus sales tax).
 * 
 * By: Anthony Narlock
 * 
 * Process: 
 *           Declare constant and inconstant variables
 *           Ask user to input month, year, total amount collected
 *           Calculate sales, & total, county, state taxes
 *           output information
 *          
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    
    //Declare constant and inconstant variables
    const double SALES_TAX = 0.06, COUNTY_TAX = 0.02, STATE_TAX = 0.04;
    double amount_collected, sales, county_sales, state_sales, total_sales;
    string month, year;
    
    //Ask user to input month, year, total amount collected
    cout << "Enter the month: ";
    cin >> month;
    
    cout << "Enter the year: ";
    cin >> year;
    
    cout << "Enter the total amount collected: ";
    cin >> amount_collected;
    
    //Calculate sales, & total, county, state taxes
    sales = (amount_collected / (1 + SALES_TAX));
    county_sales = sales * COUNTY_TAX;
    state_sales = sales * STATE_TAX;
    total_sales = sales * SALES_TAX;
    
    //Output information
    cout << "\n";
    cout << month << ", " << year << endl;
    cout << "--------------------\n" << endl;
    cout << "Total Collected: \t $" << setw(15) << fixed << setprecision(2) << amount_collected << endl;
    cout << "Sales: \t\t\t $" << setw(15) << fixed << setprecision(2) << sales << endl;
    cout << "County Sales Tax: \t $" << setw(15) << fixed << setprecision(2) << county_sales << endl;
    cout << "State Sales Tax: \t $" << setw(15) << fixed << setprecision(2) << state_sales << endl; 
    cout << "Total Sales Tax: \t $" << setw(15) << fixed << setprecision(2) << total_sales << endl;
    
    return 0;
    
}
