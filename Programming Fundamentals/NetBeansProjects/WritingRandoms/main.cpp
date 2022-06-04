#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>
#include <string>
#include <valarray>
using namespace std;

int main() {
    srand(time(0));
    
    const int MIN = 1, MAX = 50;
    int random, num, sum = 0, count = 0;
    
    ofstream outFile;
    ifstream inFile;
    string file = "Randoms.txt";
    outFile.open(file);
    
    if(outFile.fail()) {
        cout << "An unexpected error occurred: outFile.open()\n";
        return 20;
    }
    
    cout << "Writing to file \n";
    
    for(int i = 0; i < 100; i++) {
        random = rand() % (MAX - MIN +1) + MIN;
        outFile << random << endl;
        
    }
    outFile.close();
    cout << "Done writing to file.\n";
    
    cout << "Reading from file.\n";
    inFile.open("Random.txt");
    if(inFile.fail()) {
        cout << "An unexpected error occurred: inFile.open()\n";
        return 10;
    }
    
    //This while statement will essentially run through everything that is entered inside of  the file until it stops.
    while(inFile >> num) {
        sum += num;
        count++;
    }
    inFile.close();
    cout << "Done reading from file.\n";
    cout << "Sum = " << sum << endl;
    cout << "Average = " << static_cast<double>(sum) / count << endl;
    
    return 0;
}