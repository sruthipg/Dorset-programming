#include <iostream>
using namespace std;

class Rectangle {
private:
    int width, height;

public:
    // Constructor to initialize width and height
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    // Declaration of the inline function
    inline int area();
};

// Definition of the inline function outside the class
inline int Rectangle::area() {
    return width * height;  // Calculates the area of the rectangle
}

int main() {
    Rectangle rect(10, 5);  // Create a Rectangle object
    cout << "Area of rectangle: " << rect.area() << endl;  // Inline function is called here
    return 0;
}
