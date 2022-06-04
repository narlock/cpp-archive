#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
};

int main() {
    
    Book b1;
    b1.title = "Hitchhikers's Guide to the Galaxy";
    
    Book b2 = {"Harry Potter and the Sorcerer's Stone"};
    
    cout << b1.title;
        
    return 0;
}