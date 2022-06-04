/* 
 * Title: Linked List
 */
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

/*
 * Linked List Data structure
 * implementation in C++
 */
struct node {
    int value;
    node *next; //pointer to next node
};
class linkedList {
    //Attributes of doubly-linked list
    node *head, *tail;
public:
    linkedList() {
        head = NULL;
        tail = NULL;
    }
    
    void add_node(int n) {
        node *tmp = new node;
        tmp->value = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }
    
};


int main() {
    linkedList a;
    a.add_node(1);
    a.add_node(2);
    return 0;
}

