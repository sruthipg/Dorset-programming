#include <iostream>
using namespace std;

// Abstract class with a pure virtual function
class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function
    virtual double area() = 0;  // Pure virtual function
};

// Derived class Circle implementing the abstract class
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void draw() override {
        cout << "Drawing a Circle" << endl;
    }

    double area() override {
        return 3.14159 * radius * radius;
    }
};

// Derived class Rectangle implementing the abstract class
class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    void draw() override {
        cout << "Drawing a Rectangle" << endl;
    }

    double area() override {
        return width * height;
    }
};

int main() {
    // Shape shape; // Error: Cannot instantiate an abstract class
    Circle circle(5);
    Rectangle rectangle(4, 6);

    // Using the derived class objects
    Shape* shapePtr;

    shapePtr = &circle;
    shapePtr->draw();  // Calls Circle's draw() method
    cout << "Area of Circle: " << shapePtr->area() << endl;

    shapePtr = &rectangle;
    shapePtr->draw();  // Calls Rectangle's draw() method
    cout << "Area of Rectangle: " << shapePtr->area() << endl;

    return 0;
}
