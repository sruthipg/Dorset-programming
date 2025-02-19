#include <iostream>
using namespace std;

int main() {
    // break example:
    cout << "Using break:\n";
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            break;  // Breaks the loop when i is 6
        }
        cout << i << " ";
    }

    cout << "\n\nUsing continue:\n";
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;  // Skips even numbers
        }
        cout << i << " ";
    }

    // goto example:
    cout << "\n\nUsing goto:\n";
    int x = 0;
    start:  // Label
        x++;
        if (x > 3) {
            goto end;  // Jump to 'end' label if x > 3
        }
        cout << x << " ";
        goto start;  // Jump back to start label

    end:
        cout << "\nEnd of program.\n";

    return 0;
}
