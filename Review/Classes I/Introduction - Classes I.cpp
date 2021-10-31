/* 
 * Title: Classes I
 * Author: Anthony Narlock
 * Description: Review of C++ - Classes & Objects
 *
 * Created on October 30, 2021, 3:00 PM
 */
#include <iostream>
using std::string;

/*
 * How can I represent an Object in C++ ?
 * 
 * The answer: Classes
 * Class is the building block of OOP
 * Classes are user-defined data-types
 * 
 */

/*
 * Employee Class
 * 
 * Represents a "blueprint" or model of an employee
 * - Attributes in C++ are private by default
 * - To make attributes public, write public keyword
 */
class Employee{
    //Attributes of Employee
public:
    std::string Name;
    std::string Company;
    int Age;
    
    /*
     * Default Constructor - No arguments
     */
    Employee() {
        Name = "null";
        Company = "null";
        Age = -1;
    }
    
    /*
     * Initialized public attributes constructor
     */
    Employee(std::string name, std::string company, int age) {
        Name = name;
        Company = company;
        Age = age;
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
    Employee employee1;
    employee1.Name = "Anthony";
    employee1.Company = "narlock Software";
    employee1.Age = 20;
    
    //Runs employee1 object's print introduction
    employee1.PrintIntroduction();
    
    /*
     * Create an employee object using a constructor
     */
    Employee employee2 = Employee("John", "TamoStudy", 21);
        employee2.PrintIntroduction();
    
    return 0;
}

