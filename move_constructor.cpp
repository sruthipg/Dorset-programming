#include <iostream>
using namespace std;

class Example {
public:
    int* data;

    // Constructor
    Example(int val) {
        data = new int(val);
        cout << "Constructor: Allocating " << *data << endl;
    }

    // Move Constructor (rvalue reference)
    Example(Example&& obj) {
        cout << "Move Constructor: Moving resource\n";

        // Transfer ownership of memory
        data = obj.data;
        obj.data = nullptr; // Set source object’s pointer to nullptr
    }

    // Destructor
    ~Example() {
        if (data) {
            cout << "Destructor: Deleting " << *data << endl;
            delete data;
        }
    }
};

int main() {
    Example obj1(10);          // Calls constructor
    Example obj2 = move(obj1); // Calls move constructor

    return 0;
}
