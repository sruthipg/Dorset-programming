#include <iostream>
using namespace std;

int main() {
    // Declare variables for input
    double num1, num2;

    // Take input from the keyboard
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Perform operations and display results
    cout << "\nResults:\n";
    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;

    // Check for division by zero
    if (num2 != 0) {
        cout << "Division: " << num1 / num2 << endl;
    } else {
        cerr << "Division: Error! Cannot divide by zero.\n";
    }

    return 0;
}
