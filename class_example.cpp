#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // Member function to display student details
    void display() {
        cout << "Student Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student student1;  // Creating an object
    student1.name = "Alice";  // Accessing data member
    student1.age = 20;

    student1.display();  // Calling member function
    return 0;
}
