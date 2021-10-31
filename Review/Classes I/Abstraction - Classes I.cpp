/* 
 * Title: Abstraction - Classes I
 * Author: Anthony Narlock
 * Description: Review of C++ - Classes & Objects
 *
 */
#include <iostream>
using std::string;

/*
 * Abstraction: Process of hiding implementation details and only
 * showing the functionality to the user.
 * 
 * Abstraction focuses on what the object does instead of how it does it
 */

/*
 * Every class that implements this abstraction needs to provide
 * all of the attributes of this class
 */
class AbstractEmployee {
    /* People using this class must show implementation of this method */
    /* this is an abstract method */
    virtual void AskForPromotion() = 0;
};

//Employee Class abstracting from AbstractEmployee
//We must provide the information of the abstraction in our implementation
class Employee:AbstractEmployee {
    //Attributes of Employee
private:
    std::string Name;
    std::string Company;
    int Age;
public:
    Employee() {
        Name = "null";
        Company = "null";
        Age = -1;
    }

    Employee(std::string name, std::string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
    
    /*
     * Inside of this, we want to provide the logic for the method
     */
    void AskForPromotion() {
        /* If the employee's age is over than 25, they can get a promotion */
        if(Age > 25) {
            std::cout<<"Promotion for "<< Name << " was approved!" <<std::endl;
        } else {
            std::cout<<"Promotion for " << Name << " was denied." << std::endl;
        }
        
    }
};

int main() {
    
    Employee employee2 = Employee("Anthony", "narlock Software", 20);

    /* Running AskForPromotion will be denied since Employee's age is less than 25 */
    employee2.AskForPromotion();
    
    Employee employee3 = Employee("Antonio", "narlock Software", 30);
    employee3.AskForPromotion();
    
    return 0;
}

