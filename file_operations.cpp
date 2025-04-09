#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Write content to a file (overwrites existing content)
void writeToFile(const string& filename, const string& content) {
    ofstream outFile(filename);
    if (outFile.is_open()) {
        outFile << content;
        outFile.close();
        cout << "Data written successfully.\n";
    } else {
        cout << "Unable to open file for writing.\n";
    }
}

// Append content to a file
void appendToFile(const string& filename, const string& content) {
    ofstream outFile(filename, ios::app);
    if (outFile.is_open()) {
        outFile << content;
        outFile.close();
        cout << "Data appended successfully.\n";
    } else {
        cout << "Unable to open file for appending.\n";
    }
}

// Read and display file content
void readFromFile(const string& filename) {
    ifstream inFile(filename);
    string line;

    if (inFile.is_open()) {
        cout << "Reading file:\n";
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open file for reading.\n";
    }
}

// Modify specific content in a file
void modifyFileContent(const string& filename, const string& targetLine, const string& newLine) {
    ifstream inFile(filename);
    string line, content = "";

    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            if (line == targetLine)
                line = newLine;
            content += line + "\n";
        }
        inFile.close();
    } else {
        cout << "Unable to open file for reading.\n";
        return;
    }

    // Rewrite with modified content
    ofstream outFile(filename, ios::trunc);
    if (outFile.is_open()) {
        outFile << content;
        outFile.close();
        cout << "File modified successfully.\n";
    } else {
        cout << "Unable to open file for writing.\n";
    }
}
int main() {
    string filename = "data.txt";

    writeToFile(filename, "Hello World\nLine 2\n");
    appendToFile(filename, "Appended Line\n");
    modifyFileContent(filename, "Line 2", "Modified Line 2");
    readFromFile(filename);

    return 0;
}