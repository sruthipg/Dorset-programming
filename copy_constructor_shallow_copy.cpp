#include <iostream>
using namespace std;

class Example {
public:
    int* data;  // Pointer to dynamically allocated memory

    Example(int val) {
        data = new int(val);  // Dynamically allocate memory
    }

    // Default copy constructor (shallow copy)
    void show() {
        cout << "Value: " << *data << endl;
    }
};

int main() {
    Example obj1(10);
    Example obj2 = obj1;  // Shallow copy - obj2 shares the same memory

    *obj2.data = 20;  // Modifying obj2 also modifies obj1 (not intended)
    
    obj1.show();  // Output: Value: 20 (unexpected)
    obj2.show();  // Output: Value: 20

    return 0;
}

// Problem: Both obj1 and obj2 point to the same memory, so modifying one affects the other.