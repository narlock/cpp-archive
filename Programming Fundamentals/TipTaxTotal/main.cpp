/*
 * PLEASE READ: Spoke to you after class on 9/4, we agreed that it was okay if I used the cin function.
 * The purpose of this program is to calculate the total of a meal using a 18% tip and 6.75% tax.
 * By: Anthony Narlock
 */

# include <iostream>
using namespace std;

int main() {
    
    //initialize variables
    double tip, tax, total, mealTotal;
	const double TIP_PERCENT = 0.18;
	const double TAX_PERCENT = 0.0675;
    
    //ask user how much the total cost of the meal was & display input
    cout << "How much was your total? (18% tip, 6.75% tax)";
    cin >> total;
    cout << total << endl;
    
    //calculate both tax and tip, add up for final total, display all
    cout << "Meal: $" << total << endl;
    tip = total * TIP_PERCENT;
    cout << "Tip: $" << tip << endl;
    tax = total * TAX_PERCENT;
    cout << "Tax: " << tax << endl;
    cout << "Total: $" << total + tax + tip;
    
    return 0;
}