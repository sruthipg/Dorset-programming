#include <iostream>
#include <string>
using namespace std;

// Generic template class
template <typename T>
class Printer {
public:
    void print(T data) {
        cout << "Value: " << data << endl;
    }
};

// Template specialization for bool
template <>
class Printer<bool> {
public:
    void print(bool data) {
        cout << "Value: " << (data ? "Yes" : "No") << endl;
    }
};

int main() {
    Printer<int> intPrinter;
    intPrinter.print(42);  // Output: Value: 42

    Printer<string> stringPrinter;
    stringPrinter.print("Hello World");  // Output: Value: Hello World

    Printer<bool> boolPrinter;
    boolPrinter.print(true);   // Output: Value: Yes
    boolPrinter.print(false);  // Output: Value: No

    return 0;
}
