#include <iostream>
using namespace std;

#define SIZE 10  // Maximum size of the array

// Function to display array elements
void displayArray(int arr[], int length) {
    cout << "Array elements: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to insert an element at a specific position
void insertElement(int arr[], int &length, int element, int position) {
    if (length >= SIZE) {
        cout << "Array is full, cannot insert more elements!" << endl;
        return;
    }
    
    if (position < 0 || position > length) {
        cout << "Invalid position!" << endl;
        return;
    }
    
    // Shift elements to the right
    for (int i = length; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[position] = element;  // Insert new element
    length++;
    cout << "Element inserted successfully!" << endl;
}

// Function to delete an element from a specific position
void deleteElement(int arr[], int &length, int position) {
    if (position < 0 || position >= length) {
        cout << "Invalid position!" << endl;
        return;
    }

    // Shift elements to the left
    for (int i = position; i < length - 1; i++) {
        arr[i] = arr[i + 1];
    }

    length--;
    cout << "Element deleted successfully!" << endl;
}

// Function to search for an element in the array
int searchElement(int arr[], int length, int key) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == key) {
            return i;  // Return index if found
        }
    }
    return -1;  // Return -1 if not found
}

// Function to update an element at a specific position
void updateElement(int arr[], int length, int position, int newValue) {
    if (position < 0 || position >= length) {
        cout << "Invalid position!" << endl;
        return;
    }

    arr[position] = newValue;
    cout << "Element updated successfully!" << endl;
}

// Main function
int main() {
    int arr[SIZE] = {10, 20, 30, 40, 50};
    int length = 5;  // Current size of array

    int choice, element, position;

    do {
        cout << "\nArray Operations Menu:";
        cout << "\n1. Display Array";
        cout << "\n2. Insert Element";
        cout << "\n3. Delete Element";
        cout << "\n4. Search Element";
        cout << "\n5. Update Element";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayArray(arr, length);
                break;
            case 2:
                cout << "Enter element to insert: ";
                cin >> element;
                cout << "Enter position (0-based index): ";
                cin >> position;
                insertElement(arr, length, element, position);
                break;
            case 3:
                cout << "Enter position to delete (0-based index): ";
                cin >> position;
                deleteElement(arr, length, position);
                break;
            case 4:
                cout << "Enter element to search: ";
                cin >> element;
                position = searchElement(arr, length, element);
                if (position != -1)
                    cout << "Element found at index " << position << endl;
                else
                    cout << "Element not found!" << endl;
                break;
            case 5:
                cout << "Enter position to update (0-based index): ";
                cin >> position;
                cout << "Enter new value: ";
                cin >> element;
                updateElement(arr, length, position, element);
                break;
            case 6:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 6);

    return 0;
}
