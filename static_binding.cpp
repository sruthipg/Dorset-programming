#include <iostream>
using namespace std;

class StaticBinding {
public:
    void display() { // Normal function (not virtual)
        cout << "Static Binding: Base class function" << endl;
    }
};

int main() {
    StaticBinding obj;
    obj.display(); // Resolved at compile time
    return 0;
}
