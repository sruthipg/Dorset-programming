#include <iostream>
using namespace std;

// Function template for Bubble Sort
template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {  // Swap if greater
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Function template to display an array
template <typename T>
void display(T arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Main function to test sorting
int main() {
    int intArr[] = {5, 3, 8, 1, 2};
    float floatArr[] = {3.2, 1.5, 4.7, 2.8};

    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    int floatSize = sizeof(floatArr) / sizeof(floatArr[0]);

    // Sorting integer array
    cout << "Before sorting (int): ";
    display(intArr, intSize);
    bubbleSort(intArr, intSize);
    cout << "After sorting (int): ";
    display(intArr, intSize);

    // Sorting float array
    cout << "\nBefore sorting (float): ";
    display(floatArr, floatSize);
    bubbleSort(floatArr, floatSize);
    cout << "After sorting (float): ";
    display(floatArr, floatSize);

    return 0;
}
/*
Before sorting (int): 5 3 8 1 2 
After sorting (int): 1 2 3 5 8 

Before sorting (float): 3.2 1.5 4.7 2.8 
After sorting (float): 1.5 2.8 3.2 4.7

*/