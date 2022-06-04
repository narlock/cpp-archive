#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void populateArray(int arr[], int SIZE);
void displayArray(int arr[], int SIZE);

int main() {
    const int SIZE = 10;
    int numbers[SIZE];
    
    populateArray(numbers,SIZE);
    displayArray(numbers,SIZE);
    
    return 0;
}

void populateArray(int arr[], int SIZE) {
    srand(time(0));
    const int min = 1;
    const int max = 10;
    for(int i = 0; i < SIZE; i++) {
        arr[i] = (rand() % (max-min+1)) + min;
    }
}

void displayArray(int arr[], int SIZE) {
    for(int i = 0; i < SIZE; i++) {
        if(i == SIZE-1) 
            cout << arr[i];
        else 
            cout << arr[i] << ", ";
    }
    
}