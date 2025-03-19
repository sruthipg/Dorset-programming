#include <iostream>
using namespace std;

class Example {
public:
    int* data;  // Pointer to dynamically allocated memory

    Example(int val) {
        data = new int(val);  // Allocate memory dynamically
    }

    // Copy Constructor (Deep Copy)
    Example(const Example &obj) {
        data = new int(*obj.data);  // Allocate new memory and copy value
    }

    void show() {
        cout << "Value: " << *data << endl;
    }

    ~Example() { 
        delete data;  // Free memory
    }
};

int main() {
    Example obj1(10);
    Example obj2 = obj1;  // Deep copy - separate memory allocation

    *obj2.data = 20;  // Modifying obj2 does NOT affect obj1

    obj1.show();  // Output: Value: 10
    obj2.show();  // Output: Value: 20

    return 0;
}
// Now obj1 and obj2 have independent memory, avoiding unintended modifications.