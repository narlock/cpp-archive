/*
 * Interest Earned
 * By: Anthony Narlock
 * 
 * Assuming there are no deposits other than the original investment, the balance in a savings account after one year may be calculated as"
 * amount = principal*(1+(rate/t))^t
 * Principal is the balance in the savings account, Rate is the interest rate, and t is the number of times the interest is compounded
 * during a year (t is 4 if the interest is compounded quarterly)
 * 
 * Write a program that asks for the principal, the interest rate, and the number of times the interest is compounded. 
 * 
 * Process:
 *          Declare variables,
 *          cin user inputs (principal, irate, t
 *          Calculate amount using POW
 *          display final output
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    cout << "Interest Earned\nBy: Anthony Narlock\n====================\n\n";
    
    //Delcare variables
    double princ, iraten, irate, t, amount, interest;
    
    //cin user inputs
    cout << "Enter principal (The balance in your savings account): ";
    cin >> princ;
    
    cout << "Enter Interest Rate: ";
    cin >> iraten;
    irate = iraten / 100;
    
    cout << "Enter number of times the interest is compounded during 1 year\n"
            "(ex: T is 4 if the interest is compounded quarterly): ";
    cin >> t;
    
    //Calculate amount using POW
    amount = princ * pow((1+(irate/t)),t);
    
    //Calculate Interest
    interest = amount - princ;
    
    //Display final output
    cout << "\n\nInterest Rate: \t\t\t  " << setw(10) << setprecision(2) << fixed << iraten << "%" << endl;
    cout << "Times Compounded: \t\t  " << setw(10) << setprecision(2) << fixed << t << endl;
    cout << "Principal: \t\t\t$ " << setw(10) << setprecision(2) << fixed << princ << endl;
    cout << "Interest: \t\t\t$ " << setw(10) << setprecision(2) << fixed << interest << endl;
    cout << "Amount in Savings: \t\t$ " << setw(10) << setprecision(2) << fixed << amount << endl;
}


