#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Take input from the keyboard
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    // Arithmetic Operators
    cout << "\n--- Arithmetic Operators ---\n";
    cout << "Addition (a + b): " << (a + b) << endl;
    cout << "Subtraction (a - b): " << (a - b) << endl;
    cout << "Multiplication (a * b): " << (a * b) << endl;
    cout << "Division (a / b): " << (b != 0 ? (a / b) : 0) << endl; // Handles division by zero
    cout << "Modulus (a % b): " << (b != 0 ? (a % b) : 0) << endl;

    // Relational Operators
    cout << "\n--- Relational Operators ---\n";
    cout << "(a == b): " << (a == b) << endl;
    cout << "(a != b): " << (a != b) << endl;
    cout << "(a > b): " << (a > b) << endl;
    cout << "(a < b): " << (a < b) << endl;
    cout << "(a >= b): " << (a >= b) << endl;
    cout << "(a <= b): " << (a <= b) << endl;

    // Logical Operators
    cout << "\n--- Logical Operators ---\n";
    cout << "(a > 0 && b > 0): " << ((a > 0 && b > 0) ? "true" : "false") << endl;
    cout << "(a > 0 || b > 0): " << ((a > 0 || b > 0) ? "true" : "false") << endl;
    cout << "!(a > 0): " << (!(a > 0) ? "true" : "false") << endl;

    // Bitwise Operators
    cout << "\n--- Bitwise Operators ---\n";
    cout << "Bitwise AND (a & b): " << (a & b) << endl;
    cout << "Bitwise OR (a | b): " << (a | b) << endl;
    cout << "Bitwise XOR (a ^ b): " << (a ^ b) << endl;
    cout << "Bitwise Left Shift (a << 1): " << (a << 1) << endl;
    cout << "Bitwise Right Shift (a >> 1): " << (a >> 1) << endl;

    // Assignment Operators
    cout << "\n--- Assignment Operators ---\n";
    int x = a;
    x += b;
    cout << "x += b: " << x << endl;
    x -= b;
    cout << "x -= b: " << x << endl;
    x *= b;
    cout << "x *= b: " << x << endl;
    if (b != 0) {
        x /= b;
        cout << "x /= b: " << x << endl;
    }
    if (b != 0) {
        x %= b;
        cout << "x %= b: " << x << endl;
    }

    return 0;
}