#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void outputDateFormat(string date);

int main() {
    
    
    /*int SIZE = 50;
    char str[SIZE] = "abcdefghijklmnopqrstuvwxyz";
    
    cout << "Enter a string: ";
    cin.getline(str,SIZE);
    
    cout << "String: " << str << endl;
    
    for(int i = 0; i < strlen(str); i++) {
        cout << str[i];
    }
     * */
    //string month = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    //string day, year;
    
    outputDateFormat("02/21/2001");
    cout << endl;
    outputDateFormat("11/06/2019");
    cout << endl;
    
    string testdate;
    cout << "Enter your own date! must be mm/dd/yyyy format with SLASHES!: ";
    cin >> testdate;
    outputDateFormat(testdate);
            
    
    return 0;
}

void outputDateFormat(string date) {
    string dmonth = date.substr(0,2);
    int amonth = stoi(dmonth);
    
    if(amonth == 1)
        cout << "January";
    if(amonth == 2)
        cout << "February ";
    if(amonth == 3)
        cout << "March ";
    if(amonth == 4)
        cout << "April ";
    if(amonth == 5)
        cout << "May ";
    if(amonth == 6)
        cout << "June ";
    if(amonth == 7)
        cout << "July ";
    if(amonth == 8)
        cout << "August ";
    if(amonth == 9)
        cout << "September ";
    if(amonth == 10)
        cout << "October ";
    if(amonth == 11)
        cout << "November ";
    if(amonth == 12)
        cout << "December ";
               
    
    string day = date.substr(3,2);
    if(day.substr(0,1) == "0") {
        day = day.substr(1);
    }
    cout << day << ", ";
    
    string year = date.substr(6);
    cout << year;
    
}