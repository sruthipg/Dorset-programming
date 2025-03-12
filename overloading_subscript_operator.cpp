#include <iostream>
using namespace std;

class Array {
private:
    int data[5];

public:
    Array() { for (int i = 0; i < 5; i++) data[i] = i * 10; }

    // Overloading [] operator
    int operator[](int index) {
        if (index >= 0 && index < 5)
            return data[index];
        else {
            cout << "Index out of bounds!" << endl;
            return -1;
        }
    }
};

int main() {
    Array arr;
    cout << "Element at index 2: " << arr[2] << endl;
    cout << "Element at index 7: " << arr[7] << endl;  // Out of bounds case

    return 0;
}
