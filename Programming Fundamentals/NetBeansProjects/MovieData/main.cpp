/*
 * Movie Data
 * By: Anthony Narlock
 * 
 * Write a program that uses a structure named MovieData to store the following information:
 * Title
 * Director
 * Year Released
 * Running Time (in minutes)
 * 
 * The program should create two MovieData variables, store values in their members, and 
 * pass each one, in turn, to a function that displays the information about the movie
 * in a clearly formatted matter.
 */

#include <iostream>
#include <string>
using namespace std;

//Create MovieData struct that holds Title,Director,year-released, and runningtime
struct MovieData {
    string Title;
    string Director;
    string year_released;
    int running_time;
            
};

//displaymovie prototype
void displayMovie(MovieData m);

/* Function: main
 * Summary: hard codes two different movies, then calls displaymovie
 * Parameters: none
 * Returns: integer on completion of program
 * Preconditions: none
 * Postconditions: calls displaymovie function
 */

int main() {
    MovieData m1;
    m1.Title = "Inception";
    m1.Director = "Christopher Nolan";
    m1.year_released = "2010";
    m1.running_time = 148;
    
    MovieData m2;
    m2.Title = "Dead Poet's Society";
    m2.Director = "Peter Weir";
    m2.year_released = "1989";
    m2.running_time = 140;
    
    displayMovie(m1);
    displayMovie(m2);
    
    return 0;
}

/* Function: displayMovie
 * Summary: Displays movie information
 * Parameters: MovieData structure movie
 * Returns: none
 * Preconditions: none
 * Postconditions: none
 */

void displayMovie(MovieData m) {
    cout << "Title \t\t: " << m.Title << endl;
    cout << "Director \t: " << m.Director << endl;
    cout << "Released \t: " << m.year_released << endl;
    cout << "Running Time \t: " << m.running_time << " minutes" << endl;
    cout << endl;
            
}