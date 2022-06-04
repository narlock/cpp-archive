#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    string author;
    int num_pages;
    
};

Book getBookInfo();

int main() {
    const int SIZE = 5;
    Book barr[SIZE];
    
    for(int i = 0; i < SIZE; i++) {
        barr[i] = getBookInfo();
    }
    
    for(int i = 0; i < SIZE; i++) {
        cout << "Book " << i+1 << " title: " << barr[i].title << endl;
        cout << "Book " << i+1 << " author: " << barr[i].author << endl;
        cout << "Book " << i+1 << " page count: " << barr[i].num_pages << endl;
    }
    
    return 0;
}

Book getBookInfo() {
    Book book;
    cout << "Enter the book's title: ";
    getline(cin,book.title);
    cout << "Enter the book's author: ";
    getline(cin,book.author);
    cout << "Enter the number of pages in the book: ";
    cin >> book.num_pages;
    cin.ignore();
    
    return book;
}