#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;

    // Parameterized constructor of base class
    Person(string n, int a) : name(n), age(a) {
        cout << "Person constructor called" << endl;
    }
};

// Derived class
class Student : public Person {
public:
    // Constructor of derived class that calls the base class constructor
    Student(string n, int a) : Person(n, a) {
        cout << "Student constructor called" << endl;
    }

    // Method to display name and age
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Creating an object of the derived class
    Student student("John Doe", 20);
    
    // Calling the display method to print the name and age
    student.display();

    return 0;
}
