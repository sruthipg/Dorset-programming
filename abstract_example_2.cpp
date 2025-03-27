#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() = 0;  // Pure virtual function (no body in base class)

     // Pure virtual function with a body (C++11 and later)
     virtual void move() {
        cout << "Animal is moving." << endl;
    }

    void eat() {  // Normal function with a body
        cout << "Animal is eating." << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {  // Implementing the pure virtual function
        cout << "Dog barks." << endl;
    }
    void move() override {
        cout << "Dog is running." << endl;
    }
};

int main() {
    // Animal animal;  // ❌ Error: Cannot instantiate an abstract class

    Dog dog;
    dog.speak();  // Calls overridden function
    dog.move();   // Calls overridden function
    dog.eat();    // Calls base class function (has a body)

    return 0;
}
