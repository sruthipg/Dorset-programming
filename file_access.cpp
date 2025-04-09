#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("sample.txt", ios::in | ios::out | ios::trunc);

    // Write data to file
    if (file.is_open()) {
        file << "ABCDEFGHIJ";
        cout << "Initial write complete.\n";
    }

    // Move write pointer (seekp) and overwrite a character
    file.seekp(5);  // Move to 6th position (0-based index)
    file << "X";    // Replaces 'F' with 'X'

    // Show position of write pointer
    streampos writePos = file.tellp();
    cout << "Write pointer is at: " << writePos << endl;

    // Move read pointer (seekg) to read from a specific position
    file.seekg(0);  // Move to beginning
    char ch;
    file.get(ch);
    cout << "First character read: " << ch << endl;

    file.seekg(5);  // Move to 6th character
    file.get(ch);
    cout << "6th character (after modification): " << ch << endl;

    // Show position of read pointer
    streampos readPos = file.tellg();
    cout << "Read pointer is at: " << readPos << endl;

    file.close();
    return 0;
}
/*
Function	Purpose	In This Program
seekp(5)	Move write pointer to position 5	Modify 6th char 'F' → X'
tellp()	    Get current write position	        Shows position after write
seekg(5)	Move read pointer to position 5	    Read modified character
tellg()	    Get current read position	        Shows position after read
*/