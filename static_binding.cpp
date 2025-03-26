#include <iostream>
using namespace std;

// class StaticBinding {
// public:
//     void display() { // Normal function (not virtual)
//         cout << "Static Binding: Base class function" << endl;
//     }
// };

// int main() {
//     StaticBinding obj;
//     obj.display(); // Resolved at compile time
//     return 0;
// }


class Animal {
public:
    void speak() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* animalPtr;
    Dog dog;

    animalPtr = &dog;  // Pointing base class pointer to derived class object
    animalPtr->speak();  // Static binding: Calls Animal's speak() function at compile time

    dog.speak();  // Explicitly calling Dog's speak() function

    return 0;
}

