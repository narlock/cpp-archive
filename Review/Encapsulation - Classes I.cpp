/* 
 * Title: Encapsulation in Classes - Classes I
 * Author: Anthony Narlock
 * Description: Review of C++ - Classes & Objects
 *
 */
#include <iostream>
using std::string;

/*
 * Encapsulation: Idea of tying together data on methods that 
 * operate on that data - they are grouped within the class
 * We don't want outside sources to access/modify the data directly
 * We want to provide a way to do that - getters/setters
 */

//Employee Class
class Employee{
    //Attributes of Employee
private:
    std::string Name;
    std::string Company;
    int Age;
public:
    //Default Constructor - No arguments
    Employee() {
        Name = "null";
        Company = "null";
        Age = -1;
    }
    //Initialized Constructor
    Employee(std::string name, std::string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
    
    /*
     * Getters and Setters
     * Getters will return the value that we want to get
     * Setters will set a value to a specified attribute
     */
    void setName(std::string name) {
        Name = name;
    }
    
    std::string getName() {
        return Name;
    }
    
    //Example of Class Method / Function
    void PrintIntroduction() {
        std::cout<<"Hello, I am " << Name << std::endl;
        std::cout<<"I work for " << Company << std::endl;
        std::cout<<"I am currently " << Age << " years old" << std::endl;
    }
    
};

int main() {
    
    /*
     * Creates an employee object,
     * Initializes public attributes of object
     */
    Employee employee2 = Employee("Anthony", "narlock Software", 20);
    //Testing Getter
    std::cout<<"Testing getName: "<< employee2.getName() << std::endl;
    //Testing Setter and Getter
    employee2.setName("Tony");
    std::cout<<"After setName: "<< employee2.getName() << std::endl;
    
    /*
     * The attributes are encapsulated since they are private, only
     * can be accessed via the getter and setter methods that we have
     * defined. We can choose which we want to change depending on
     * implementation.
     */
    
    return 0;
}

