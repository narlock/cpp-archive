
#include <iostream>
#include "Car.h"
using namespace std;


int main() {
    
    Car car1(1915, "Honda", "Civic");
    Car car2(1920, "Ford", "F150");
    Car car3(1998, "Ford", "Ranger", 30);
    
    // Print the attributes of the Cars
    cout << "Car 1: " << car1.getYear() << " " << car1.getMake() << " " 
            << car1.getModel() << " " << car1.getSpeed() << endl;
    cout << "Car 2: " << car2.getYear() << " " << car2.getMake() << " " 
            << car2.getModel() << " " << car2.getSpeed() << endl;    
    cout << "Car 3: " << car3.getYear() << " " << car3.getMake() << " " 
            << car3.getModel() << " " << car3.getSpeed() << endl;  
    
    // Speed up car1:
    for (int i = 0; i < 10; i++) {
        car1.accelerate();
    }
    cout << "Car 1 is now going: " << car1.getSpeed() << endl;
    
    // Brake car1:
    for (int i = 0; i < 20; i++) {
        car1.brake();
    }
    cout << "Car 1 is now going: " << car1.getSpeed() << endl;
    
    car3.accelerate(40);
    cout << "Car 3 is now going: " << car3.getSpeed() << endl;
    
    car3.brake(20);
    cout << "Car 3 is now going: " << car3.getSpeed() << endl;
    
    return 0;
}

