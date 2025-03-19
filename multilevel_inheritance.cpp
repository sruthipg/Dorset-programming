#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

// Intermediate derived class
class Mammal : public Animal {
public:
    void walk() {
        cout << "Walking..." << endl;
    }
};

// Final derived class
class Dog : public Mammal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

int main() {
    Dog d;
    d.eat();  // Inherited from Animal
    d.walk(); // Inherited from Mammal
    d.bark(); // Dog's own function
    return 0;
}
