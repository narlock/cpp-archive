/*
 * Anthony Narlock
 * Inventory Class
 * 
 * Design an inventory class that can hold information and calculate data for items in a retail store’s inventory.
 */

#include <iostream>
using namespace std;

//The class Inventory represents an Inventory Object
class Inventory {
private:
    //Attributes of Inventory
    int itemNumber;
    int quantity;
    double cost;
public:
    //Default Constructor
    Inventory();
    //Constructor that accepts custom inputs
    Inventory(int number, double cos, int quan);
    
    //setter member functions/methods
    void setItemNumber(int i);
    void setQuantity(int q);
    void setCost(double c);
    
    //getter member functions/methods
    int getItemNumber() const;
    int getQuantity() const;
    double getCost() const;
    double getTotalCost() const;
};

//Default Constructor for Inventory, sets all attributes to zero
Inventory::Inventory() {
    itemNumber = 0;
    quantity = 0;
    cost = 0;
}

//Constructor that accepts itemNumber, cost, and quantity as arguments and updates the attributes
Inventory::Inventory(int number, double cos, int quan) {
    itemNumber = number;
    cost = cos;
    quantity = quan;
}

//Returns the value of itemNumber attribute
int Inventory::getItemNumber() const {
    return itemNumber;
}

//Returns the value of cost attribute
double Inventory::getCost() const {
    return cost;
}

//Returns the value of quantity attribute
int Inventory::getQuantity() const {
    return quantity;
}

//Returns the total cost through quantity and cost attributes respectively
double Inventory::getTotalCost() const {
    double tcost = quantity * cost;
    return tcost;
}

//Accepts an integer argument that is copied to the itemNumber member variable, input validation to ensure above zero or equal to zero.
void Inventory::setItemNumber(int i) {
    if(i <= 0) {
        cout << "Item Number must be greater than or equal to zero.\n";
    } else {
        itemNumber = i;
    }
    
}

//Accepts an integer argument that is copied to the setQuality member function, input validaton added respectively
void Inventory::setQuantity(int q) {
    if(q <= 0) {
        cout << "Quantity must be greater than or equal zero.\n";
    } else {
    quantity = q;
    }
}

//Accepts a double argument that is copied to the setCost member function, input validation added respecitvely
void Inventory::setCost(double c) {
    if(c <= 0) {
        cout << "Cost must be greater than  or equal to zero.\n";
    } else {
        cost = c;
    }
}

//Main Function
    int main() {
   // Define an Inventory object and use the default constructor.
   Inventory inv;

   // Display the member values.
   cout << "We have defined an object using the default constructor\n";
   cout << "Here are the values of the members:\n";
   cout << "Item number: " << inv.getItemNumber() << endl;
   cout << "Quantity: " << inv.getQuantity() << endl;
   cout << "Cost: " << inv.getCost() << endl;
   cout << "Total cost: " << inv.getTotalCost() << endl << endl;

   // Define an Inventory object and use the overloaded constructor.
   Inventory inv2(777, 10, 12.50);

   // Display the member values.
   cout << "We have defined an object using the overloaded constructor\n";
   cout << "Here are the values of the members:\n";
   cout << "Item number: " << inv2.getItemNumber() << endl;
   cout << "Quantity: " << inv2.getQuantity() << endl;
   cout << "Cost: " << inv2.getCost() << endl;
   cout << "Total cost: " << inv2.getTotalCost() << endl << endl;

   // Use the mutator functions to change the member values.
   inv2.setItemNumber(555);
   inv2.setQuantity(20);
   inv2.setCost(19.95);

   // Display the modified values.
   cout << "We have changed the values.\n";
   cout << "Here are the new values of the members:\n";
   cout << "Item number: " << inv2.getItemNumber() << endl;
   cout << "Quantity: " << inv2.getQuantity() << endl;
   cout << "Cost: " << inv2.getCost() << endl;
   cout << "Total cost: " << inv2.getTotalCost() << endl << endl;
   
   // Try to set negative numbers in for all the attributes:
   inv2.setItemNumber(-5);
   inv2.setQuantity(-10);
   inv2.setCost(-3);
   
   // Display the values. Should be the same as before.
   cout << "\nShouldn't be any changes.\n";
   cout << "Here are the new values of the members:\n";
   cout << "Item number: " << inv2.getItemNumber() << endl;
   cout << "Quantity: " << inv2.getQuantity() << endl;
   cout << "Cost: " << inv2.getCost() << endl;
   cout << "Total cost: " << inv2.getTotalCost() << endl << endl;  

   return 0;
}