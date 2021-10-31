/* 
 * Title: Inheritance - Classes I
 * Author: Anthony Narlock
 * Description: Review of C++ - Classes & Objects
 *
 */
#include <iostream>
#include <string>
using std::string;

/*
 * Inheritance: An Object-Oriented technique that allows one class to inherit
 * the attributes and methods of another class.
 * 
 * We have a parent -> child relationship.
 * The parent class is sometimes referred to as superclass or base class,
 * The child class can be referred to as the subclass or derived class.
 * 
 * The child class will inherit the parent class attributes.
 */

/*
 * Employee is pretty generic, we know that in a work environment we have
 * specific title for employees, each of which do their own kind of work
 */
class Employee {
private:
    std::string Name;
    int Age;
/*
 * Protected allows child classes to use these attributes directly
 */
protected:
    std::string Company;
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
    
    std::string getName() {
        return Name;
    }
    
    std::string toString() {
        return "Name: " + Name +
                "\nCompany: " + Company;
    }
    
    std::string printToString() {
        std::cout << "\nName: " + Name + "\nCompany: " + Company << std::endl;
    }
};

/* Developer class will inherit Employee 
 * Developer class is now a child class of Employee
 * Meaning it has all of the properties of Employee
 * 
 * class Developer: Employee { // This is private by default,
 * meaning that we would not have access to the methods directly inside
 * of lets say the main function, we would not be abled to do dev.toString
 * - To fix this, we can write public keyword before Employee as implemented
 */
class Developer:public Employee {
    //Developer class specific attributes
public:
    std::string ProgrammingLanguage;
    Developer(std::string name, std::string company, int age, std::string language) 
        :Employee(name, company, age)
    {
        ProgrammingLanguage = language;
        
    }
    
    /* Example of method using private Employee attribute, we must use getter */
    void FixBug() {
        std::cout << getName() << " is fixing a bug using " << ProgrammingLanguage << std::endl;
    }
    
    /* Example of method using protected Employee attribute, we can use it normally */
    void PraiseCompany() {
        std::cout << getName() << " is glad that " << Company << " uses " << ProgrammingLanguage << std::endl;
    }
};

/* Another Example private class */
class Intern:public Employee {
public:
    std::string UniversityName;
    
    Intern(std::string name, std::string company, int age, std::string university)
        :Employee(name, company, age)
    {
        UniversityName = university;
    }
    
    void helpDeveloper() {
        std::cout << getName() << " is helping developer fix bug." << std::endl;
    }
    
};

int main() {
    
    Developer dev = Developer("Anthony", "narlock Software", 20, "Java");
    dev.FixBug();
    dev.PraiseCompany();
    dev.printToString();
    
    Intern intern = Intern("Tony", "narlock Software", 18, "University of C++");
    intern.helpDeveloper();
    
    return 0;
}

