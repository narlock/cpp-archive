#include <iostream>
using namespace std;

int* allocateMemory(int size);

int main() {
    int size = 5;
    int* ptr = allocateMemory(size);
    
}

int* allocateMemory(int size) {
    int *ptr = nullptr;
    ptr = new int[size];
    for(int i = 0; i < size; i++) {
        cout << "Test" << i+1 << endl;
        //cin >> tempArray[i];
        cin >> *(ptr + i);
    }
    return ptr;
}
