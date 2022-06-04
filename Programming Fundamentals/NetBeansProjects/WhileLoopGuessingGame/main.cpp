/*
 * Guessing Game
 * Anthony Narlock
 */

#include <iostream>
#include <ctime>
#include <cstdlib>;
using namespace std;

int main() {
    
    srand(time(0));
    int min = 1, max = 100;
    int random = (rand() % (max-min+1)) +1;
    int guess;
    cout << "DEBUG: RANDOM NUMBER EQUALS: " << random << endl;
    
    cout << "Guess a number 1-100: ";
    cin >> guess;
    
    while(guess != random) {
        if(guess > random) {
            cout << "Your guess was too HIGH!\n";
        }
        else {
            cout << "Your guess was too LOW!\n";
        }
        cout << "Guess a number: ";
        cin >> guess;
                
    }
    
    cout << "You have guessed the number!";
    return 0;
}