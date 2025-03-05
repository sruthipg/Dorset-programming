#include <iostream>
using namespace std;

class Rectangle {
private:
    int width, height;

public:
    // Inline function to calculate the area of the rectangle
    inline int area() {
        return width * height;  // The function directly calculates the area
    }

    // Constructor to initialize width and height
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }
};

int main() {
    Rectangle rect(10, 5);  // Create a Rectangle object
    cout << "Area of rectangle: " << rect.area() << endl;  // Inline function is called here
    return 0;
}
