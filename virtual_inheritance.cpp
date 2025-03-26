#include <iostream>
using namespace std;

// Base class with virtual inheritance
class Shape {
public:
    virtual void draw() { // Virtual function
        cout << "Drawing Shape" << endl;
    }
    
    virtual ~Shape() { // Virtual destructor
        cout << "Destroying Shape" << endl;
    }
};

// Rectangle class inheriting virtually from Shape
class Rectangle : virtual public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

// Circle class inheriting virtually from Shape
class Circle : virtual public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

// Square class inheriting from both Rectangle and Circle
class Square : public Rectangle, public Circle {
public:
    void draw() override { 
        cout << "Drawing Square" << endl;
    }
};

int main() {
    Square sq;
    sq.draw(); // Calls Square's draw method

    return 0;
}
