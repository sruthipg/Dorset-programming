#include <iostream>
#include <stdexcept>

void testDivision(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero is not allowed.");
    }
    std::cout << "Result: " << a / b << std::endl;
}

int main() {
    try {
        testDivision(10, 0);  // This will throw an exception
    } catch (const std::invalid_argument& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
