#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "Meowing..." << endl;
    }
};

int main() {
    Dog d;
    Cat c;

    d.eat();  // Inherited from Animal
    d.bark(); // Dog-specific function

    c.eat();  // Inherited from Animal
    c.meow(); // Cat-specific function

    return 0;
}
