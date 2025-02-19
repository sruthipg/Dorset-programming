#include <iostream>
using namespace std;

int main() {
    int day;

    // Taking input from the user
    cout << "Enter a day number (1 for Monday, 7 for Sunday): ";
    cin >> day;

    // Using switch to determine if it's a working day or week off
    switch(day) {
        case 1: case 2: case 3: case 4: case 5:
            cout << "It's a Working Day." << endl;
            break;
        case 6: case 7:
            cout << "It's a Week Off!" << endl;
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 7." << endl;
    }

    return 0;
}
