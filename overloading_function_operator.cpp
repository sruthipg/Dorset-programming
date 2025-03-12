#include <iostream>
using namespace std;

class Multiply {
public:
    int operator()(int a, int b) {
        return a * b;
    }
};

int main() {
    Multiply multiply;
    cout << "Product: " << multiply(4, 5) << endl;  // Using object like function

    return 0;
}
