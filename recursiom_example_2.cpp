#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)  // Base case
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive calls
}

int main() {
    int terms;
    cout << "Enter the number of terms: ";
    cin >> terms;
    cout << "Fibonacci Series: ";
    for (int i = 0; i < terms; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}
