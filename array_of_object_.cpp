#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Function to input student details
    void getDetails() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    // Function to display student details
    void showDetails() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student students[n];  // Declaring an array of objects

    // Taking input for all students
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Student " << i + 1 << ":\n";
        students[i].getDetails();
    }

    // Displaying student details
    cout << "\nStudent Details:\n";
    for (int i = 0; i < n; i++) {
        students[i].showDetails();
    }

    return 0;
}
