#include <iostream>
#include <fstream>
#include <exception>

int main() {
    std::ifstream file;

    try {
        // Open file in read mode
        file.open("example.txt", std::ios::in);

        if (!file.is_open()) {
            throw std::ios_base::failure("File could not be opened.");
        }

        // Attempt to write to the file opened in read mode
        file << "Trying to write to a read-only file." << std::endl;

        // Close the file
        file.close();
    }
    catch (const std::ios_base::failure& e) {
        std::cerr << "I/O Exception caught: " << e.what() << std::endl;
    }
    catch (...) {
        std::cerr << "An unknown error occurred." << std::endl;
    }

    return 0;
}
