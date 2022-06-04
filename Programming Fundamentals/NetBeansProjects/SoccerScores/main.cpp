/*
 * Soccer Scores
 * By; Anthony Narlock
 * 
 * Write a program that stores the following data about a soccer player in a structure:
 *  Player's name
 *  Player's Number
 *  Points scored by player
 * 
 * The program should keep an array of 12 of these structures. Each element is for a
 * different player on a team. When the program runs it should ask the user to enter 
 * the data for each player. It should then show a table that lists each player's name,
 * number, and points scored. The program should also calculate and display the total
 * points earned by the team. The number and name of the player who has earned the most
 * points should also be displayed.
 * 
 * You do not need to do input validation, use 4 soccer players instead of 12 to reduce data
 * 
 */

#include <iostream>
#include <string>
using namespace std;

struct Player {
    string name;
    int num;
    int points_scored;
};

Player getPlayerInfo(int p);
void displayPlayerInfo(Player player);
string getHighestEarner(Player player[], int SIZE);
int getTotalPoints(Player player[], int SIZE);

/* Function: main
 * Summary: Creates player array, then calls getplayerinfo, displayplayerinfo, gettotalpoints and gethighestearner
 * Parameters: none
 * Returns: integer on completion of program
 * Preconditions: none
 * Postconditions: calls functions by cycling through arrays to answer question
 */

int main() {
    const int SIZE = 4;
    Player player[SIZE];
    
    for(int i = 0; i < SIZE; i++) {
        player[i] = getPlayerInfo(i);
    }
    
    cout << "\nNAME \t       NUMBER \t POINTS SCORED\n";
    for(int i = 0; i < SIZE; i++) {
        displayPlayerInfo(player[i]);
    }
    
    cout << "TOTAL POINTS: " << getTotalPoints(player, SIZE) << endl;
    cout << "\nThe player who scored the most points is: " << getHighestEarner(player, SIZE) << endl;
    
    return 0;
}

/* Function: getPlayerInfo
 * Summary: Gets player information from user
 * Parameters: integer of number of player information being entered (not game number)
 * Returns: Player struct for the player
 * Preconditions: none
 * Postconditions: none
 */

Player getPlayerInfo(int p) {
    Player player;
    cout << "\nPLAYER #" << p+1 << "\n----------" << endl;
    cout << "Player's name: ";
    getline(cin,player.name);
    cout << "Player's number: ";
    cin >> player.num;
    cin.ignore();
    cout << "Points scored: ";
    cin >> player.points_scored;
    cin.ignore();
    
    return player;
}

/* Function: displayPlayerInfo
 * Summary: displays the information of a player
 * Parameters: Player struct
 * Returns: none
 * Preconditions: none
 * Postconditions: none
 */

void displayPlayerInfo(Player player) {
    cout << player.name << "\t\t" << player.num << "\t" << player.points_scored << endl;
}

/* Function: getTotalPoints
 * Summary: returns total of points by all players
 * Parameters: player struct array, size
 * Returns: total number of points 
 * Preconditions: none
 * Postconditions: cycles through for loop which adds up points to total
 */

int getTotalPoints(Player player[], int SIZE) {
    int total = 0;
    for(int i = 0; i < SIZE; i++) {
        total = total + player[i].points_scored;
    }
    return total;
}

/* Function: getHighestEarner
 * Summary: gets the highest point scorer
 * Parameters: player struct array, size
 * Returns: integer name of the highest earner
 * Preconditions: none
 * Postconditions: cycles through for loop to find the highest point scorer
 */

string getHighestEarner(Player player[], int SIZE) {
    int highest = 0, highPoints = player[0].points_scored;
    for(int i = 0; i < SIZE; i++) {
        if(player[i].points_scored > highPoints) {
            highest = i;
            highPoints = player[i].points_scored;
        }
    }
    return player[highest].name;
}

