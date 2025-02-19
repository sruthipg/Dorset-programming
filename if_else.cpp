#include <iostream>
#include <string>
using namespace std;

int main() {
    string day;
    
    // Take input from user
    cout << "Enter the day of the week: ";
    cin >> day;

    // // Convert input to lowercase for case insensitivity
    // for (char &c : day) {
    //     c = tolower(c);
    // }

    // Check if the day is a weekend or a working day
    if (day == "saturday" || day == "sunday") {
        cout << day << " is a week off!" << endl;
    } else if (day == "monday" || day == "tuesday" || day == "wednesday" || 
               day == "thursday" || day == "friday") {
        cout << day << " is a working day!" << endl;
    } else {
        cout << "Invalid input! Please enter a valid day of the week." << endl;
    }

    return 0;
}
