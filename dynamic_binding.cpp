#include <iostream>
using namespace std;

// class Base {
// public:
//     virtual void display() { // Virtual function
//         cout << "Dynamic Binding: Base class function" << endl;
//     }
// };

// class Derived : public Base {
// public:
//     void display() override { // Overriding virtual function
//         cout << "Dynamic Binding: Derived class function" << endl;
//     }
// };

// int main() {
//     Base* obj; // Pointer to base class
//     Derived d;
//     obj = &d; // Base class pointer points to derived class object
//     obj->display(); // Calls derived class function (resolved at runtime)
//     return 0;
// }


class Animal {
public:
    virtual void speak() {  // Virtual function
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {  // Overriding the base class method
        cout << "Dog barks" << endl;
    }

    // Accessing the base class (Animal) speak method explicitly
    void baseSpeak() {
        Animal::speak();  // Calling the base class method explicitly
    }
};

int main() {
    Animal* animalPtr;
    Dog dog;

    animalPtr = &dog;
    animalPtr->speak();  // Calls Dog's speak() due to dynamic binding

    dog.baseSpeak();  // Calls Animal's speak() explicitly via the Dog's method

    return 0;
}
