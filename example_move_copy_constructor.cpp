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

    // Copy Constructor (Deep Copy)
    Example(const Example& obj) {
        data = new int(*obj.data); // Allocates new memory
        cout << "Copy Constructor: Deep copying " << *data << endl;
    }

    // Move Constructor (Shallow Copy)
    Example(Example&& obj) {
        cout << "Move Constructor: Moving resource\n";
        data = obj.data;  // Transfer ownership
        obj.data = nullptr; // Nullify source to prevent deletion
    }

    // Destructor
    ~Example() {
        if (data) {
            cout << "Destructor: Deleting " << *data << endl;
            delete data;
        }
    }
};

// Function that returns an object (forces move or copy)
Example createExample() {
    return Example(100);  // Temporary (rvalue)
}

int main() {
    cout << "Creating obj1\n";
    Example obj1(10);  // Calls Constructor

    cout << "\nCopying obj1 to obj2\n";
    Example obj2 = obj1;  // Calls Copy Constructor

    cout << "\nMoving obj1 to obj3\n";
    Example obj3 = move(obj1);  // Calls Move Constructor

    cout << "\nCreating obj4 using a function\n";
    Example obj4 = createExample();  // Calls Move Constructor

    return 0;
}

/*
Creating obj1
Constructor: Allocating 10

Copying obj1 to obj2
Copy Constructor: Deep copying 10

Moving obj1 to obj3
Move Constructor: Moving resource

Creating obj4 using a function
Constructor: Allocating 100
Move Constructor: Moving resource

Destructor: Deleting 10
Destructor: Deleting 100
Destructor: Deleting 10
*/