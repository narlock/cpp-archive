/*
 * Please note: This program uses the standard outputting system in NetBeans.
 * 
 * A movie theater only keeps a percentage of the revenue earned from ticket sales. Remainder goes to movie distributer. 
 * Write a program that calculates a theater's gross and net box office profit for a night. 
 * 
 *  By: Anthony Narlock
 * 
 * Process: 
 *          Declare constant variables non-constant variables
 *          ask user for name of movie, and tickets sold
 *          calculate prices
 *          calculate report 
 *          output report
 *          
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    
    //Declare variables
    const int PRICE_PER_ADULT = 12, PRICE_PER_CHILD = 7;
    const double PERCENT_PROFIT_THEATER = 0.20, PERCENT_PROFIT_DISTRIBUTER = 0.80;
    int adult_tickets_sold, child_tickets_sold;
    double gross;
    string movie;
    
    //Ask user for movie, and tickets sold
    cout << "Enter the name of the movie: ";
    getline(cin,movie);
    
    cout << "Enter the number of adult tickets sold: ";
    cin >> adult_tickets_sold;
    
    cout << "Enter the number of child tickets sold: ";
    cin >> child_tickets_sold;
    
    //Calculate gross
    gross = (adult_tickets_sold * PRICE_PER_ADULT) + (child_tickets_sold * PRICE_PER_CHILD);
    
    //Calculate report & output report
    cout << "\n"
            "Revenue Report\n"
            "==============\n";
    cout << "Movie Name: \t\t\t  " << setw(10) << movie << endl;
    cout << "Adult Tickets Sold: \t\t  " << setw(10) << adult_tickets_sold << endl;
    cout << "Child Tickets Sold: \t\t  " << setw(10) << child_tickets_sold << endl;
    cout << "Gross Box Office Profit: \t $" << setw(10) << setprecision(2) << fixed << gross << endl;
    cout << "Net Box Office Profit: \t\t $" << setw(10) << setprecision(2) << fixed << (gross * PERCENT_PROFIT_THEATER) << endl;
    cout << "Amount Paid to Distributer: \t $" << setw(10) << setprecision(2) << fixed << (gross * PERCENT_PROFIT_DISTRIBUTER) << endl;
                   
    return 0;
}