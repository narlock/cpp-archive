/* 
 * File:   main.c
 * Author: antho
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
 * Reading and Writing Files
 */

int main() {
    
    //Creating a pointer to specific file on our computer, opens file
    //If the file does not exist, C will create a new one
    FILE * fpointer = fopen("students.txt", "w");
    
    //Writes the information to file
    //If the file already existed, it would overwrite it's contents with this
    fprintf(fpointer,"Anthony, UMN\nTony, Century"); //file printf function - write information to file
    
    //Closes file - removes it from memory
    fclose(fpointer);
    
    //Appending text to file
    FILE * fpointer2 = fopen("students.txt", "a");
    fprintf(fpointer2,"\nJohn, Harvard");
    
    //closes file - removes from memoy
    fclose(fpointer2);
    
    //Reading a file
    char line[255];
    char line2[255];
    FILE * fpointer3 = fopen("samplefile.txt", "r");
    //Reading individual lines of a file
    
    fgets(line, 255, fpointer3); //Reads first line of file, stores in line var
    printf("%s\n", line); //Prints the first line in samplefile.txt
    
    fgets(line2, 255, fpointer3); //Reads second line of file, stores in line2 var
    printf("%s\n", line2);
    
    fclose(fpointer3);
    
    return 0;
}
