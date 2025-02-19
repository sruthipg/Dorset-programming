#include <iostream>
using namespace std;

int main() {
    int n;

    // Take input from the user
    cout << "Enter a number: ";
    cin >> n;

    // Using while loop
    cout << "\nUsing while loop:\n";
    int i = 1;
    while (i <= n) {
        cout << i << " ";
        i++;
    }

    // Using do-while loop
    cout << "\n\nUsing do-while loop:\n";
    int j = 1;
    do {
        cout << j << " ";
        j++;
    } while (j <= n);

    // Using for loop
    cout << "\n\nUsing for loop:\n";
    for (int k = 1; k <= n; k++) {
        cout << k << " ";
    }

    return 0;
}
