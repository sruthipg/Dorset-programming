#include <iostream>
using namespace std;

// Base class
class Person {
public:
    void display() {
        cout << "I am a person." << endl;
    }
};

// Virtual Base Class
class Employee : virtual public Person {
public:
    void work() {
        cout << "Working..." << endl;
    }
};

// Virtual Base Class
class Student : virtual public Person {
public:
    void study() {
        cout << "Studying..." << endl;
    }
};

// Derived Class
class Intern : public Employee, public Student {
public:
    void internWork() {
        cout << "Interning at a company..." << endl;
    }
};

int main() {
    Intern i;
    i.display();   // No duplication due to virtual inheritance
    i.work();
    i.study();
    i.internWork();
    return 0;
}
//
