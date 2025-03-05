#include <iostream>
using namespace std;

class ClassB;  // Forward declaration

class ClassA {
private:
    int numA;

public:
    ClassA(int x) : numA(x) {}  // Constructor
    friend void showData(ClassA, ClassB);  // Friend function declaration
};

class ClassB {
private:
    int numB;

public:
    ClassB(int y) : numB(y) {}  // Constructor
    friend void showData(ClassA, ClassB);  // Friend function declaration
};

// Friend function definition
void showData(ClassA objA, ClassB objB) {
    cout << "ClassA Data: " << objA.numA << endl;
    cout << "ClassB Data: " << objB.numB << endl;
}

int main() {
    ClassA obj1(10);
    ClassB obj2(20);
    showData(obj1, obj2);  // Calling friend function
    return 0;
}
