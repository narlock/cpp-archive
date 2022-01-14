/* 
 * Title: File IO
 * Author: Anthony Narlock
 *
 */
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

/*
 * File input and output is used commonly in computer software.
 * This file will demonstrate how to read, write, and append files
 * using C++.
 */

int main() {
    /*
     * Any File IO will requite the fstream import (see line 8)
     * 
     * To write files, we will use an ofstream, outputFile Stream
     * This will create the file and store information in it.
     */
    ofstream outputFile;
    outputFile.open("testWrite.txt");
    
    //Writing information
    outputFile << "This text was written to the file";
    outputFile << "!"; //Demonstrating that this ! is on the same line
    outputFile << endl << "This text is on the next line!";
    
    //Close the file after writing to it
    outputFile.close();
    cout << "Successfully wrote information to file.";
    
    /*
     * Appending information to a file means to essentially
     * add on to what we already have in the file.
     */
    ofstream outfile;
    outfile.open("testWrite.txt", std::ios_base::app);
    
    //Append information to file
    outfile << "\nThis text was appended to the file.";
    outfile.close();
    
    cout << endl;
    
    /*
     * Reading information from a file
     * 
     * This works similar to the cin function,
     * we can input information based off of where
     * we are in the file.
     */
    ifstream inputFile;
    string line;
    
    inputFile.open("testWrite.txt"); //We will be reading the file we just made
    
    //Getting the lines
    getline(inputFile, line);    //Read line 1 from the file
    cout << line << endl;
    
    getline(inputFile, line);    //Read line 2 from the file
    cout << line << endl;
    
    getline(inputFile, line);    //Read line 3 from the file
    cout << line << endl;
    
    inputFile.close();
    
    return 0;
}

