#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() { // Virtual function
        cout << "Dynamic Binding: Base class function" << endl;
    }
};

class Derived : public Base {
public:
    void display() override { // Overriding virtual function
        cout << "Dynamic Binding: Derived class function" << endl;
    }
};

int main() {
    Base* obj; // Pointer to base class
    Derived d;
    obj = &d; // Base class pointer points to derived class object
    obj->display(); // Calls derived class function (resolved at runtime)
    return 0;
}
