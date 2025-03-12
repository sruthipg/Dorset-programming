#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    Point(int a, int b) : x(a), y(b) {}

    // Overloading == operator
    bool operator==(const Point& p) {
        return (x == p.x && y == p.y);
    }
};

int main() {
    Point p1(2, 3), p2(2, 4);

    if (p1 == p2)
        cout << "Points are equal!" << endl;
    else
        cout << "Points are not equal!" << endl;

    return 0;
}
