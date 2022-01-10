/* 
 * File:   main.c
 * Author: antho
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * Structs
 * A data structure in which we can store a group of data types
 */

/*
 * struct <struct-name> {
 *      <attributes>
 * };
 */

//Student struct example
struct Student {
    char name[50];
    char major[50];
    int age;
    double gpa;
    
};

int main() {
    struct Student student1; //initalize new student struct
    student1.age = 20;
    student1.gpa = 3.65;
    //String copy function to store name, major
    strcpy(student1.name, "Anthony");
    strcpy(student1.major, "Computer Science");
    
    printf("Hi %s.\n", student1.name);
    printf("%s's major is %s.\n",student1.name,student1.major);
    printf("%s, the %s major, is %d years old.\n", student1.name, student1.major, student1.age);
    printf("\n=====\nStudent Information:\nName: %s\nAge: %d\nMajor: %s\nGPA: %f\n=====\n", student1.name, student1.age, student1.major, student1.gpa);
    
    return 0;
}
