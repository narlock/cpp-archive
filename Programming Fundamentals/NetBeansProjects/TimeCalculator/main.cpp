/*
 * Time calculator
 * By: Anthony Narlock
 * 
 * Write a c++ program that asks the user to enter a number of seconds
 *      - there are 60 seconds in a minute. if the number of seconds entered by the
 *        user is greater than or equal to 60, the program should display the number of
 *        minutes in that many seconds
 *      - there are 3600 seconds in an hour. if the number of seconds enter by the
 *        user is greater than or equal to 3600, the program should display the number
 *        of hours in that many seconds
 *      - There are 86400 seconds in a day. if the number of seconds entered by the
 *        user is greater than or equal to 86400, the program should display the 
 *        number of days in that many seconds.
 * 
 * If the user enters less than 60 seconds, simply display the number of seconds.
 * 
 * Use constants to represent the number of seconds in a minute, hour and day.
 * 
 * Your output should NOT include any leading time period of 0. For example, if the
 * input is 3600 seconds, then you should display 1 hour, 0 seconds. But you should
 * NOT display 0 days, 1 hour, 0 seconds.
 * 
 * Process: Declare constant variables and second variable
 *          ask user for seconds
 *          compare if statements
 *          display output based off of if argument that best suits seconds entered
 * 
 */

#include <iostream>
using namespace std;

int main() {
    
    //Declare variables
    int seconds;
    const int SECONDS_PER_MINUTE = 60, SECONDS_PER_HOUR = 3600, SECONDS_PER_DAY = 86400;
    
    
    //Ask user for seconds
    cout << "Enter seconds: (Integers only) ";
    cin >> seconds;
    
    
    //Compare if statements
    if(seconds < 60)
        cout << seconds << " seconds.";
    
    if(seconds >= 60)
        if(seconds < 3600)
            cout << seconds / SECONDS_PER_MINUTE << " minutes, " << seconds % SECONDS_PER_MINUTE << " seconds.";
        else if(seconds < 86400)
            cout << seconds / SECONDS_PER_HOUR << " hours, " << (seconds % SECONDS_PER_HOUR) / SECONDS_PER_MINUTE << " minutes, " << (seconds % SECONDS_PER_HOUR) % SECONDS_PER_MINUTE << " seconds.";
        else if(seconds >= 86400)
            cout << seconds / SECONDS_PER_DAY << " days, " << (seconds % SECONDS_PER_DAY) / SECONDS_PER_HOUR << " hours, " << ((seconds % SECONDS_PER_DAY) % SECONDS_PER_HOUR) / SECONDS_PER_MINUTE << " minutes, " << (((seconds % SECONDS_PER_DAY) % SECONDS_PER_HOUR) % SECONDS_PER_MINUTE) << " seconds.";
    
        return 0;
        
}