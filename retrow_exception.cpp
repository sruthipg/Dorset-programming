#include <iostream>
#include <fstream>
#include <stdexcept>  // For exceptions
#include <string>

void log_error(const std::string& message) {
    // Simulate logging the error to a file
    std::cerr << "Log: " << message << std::endl;
}

void read_from_file(const std::string& filename) {
    try {
        std::ifstream file(filename);

        if (!file.is_open()) {
            throw std::ios_base::failure("Error: Could not open file.");
        }

        // Simulating reading from file
        std::string content;
        file >> content;

        std::cout << "File content: " << content << std::endl;

        file.close();
    } catch (const std::ios_base::failure& e) {
        // Log the error and rethrow the exception to the calling function
        log_error(e.what());
        throw;  // Rethrow the current exception
    }
}

void process_file(const std::string& filename) {
    try {
        read_from_file(filename);  // This may throw an exception
    } catch (const std::ios_base::failure& e) {
        // Handle the exception at a higher level
        std::cerr << "Exception caught in process_file: " << e.what() << std::endl;
    }
}

int main() {
    // Trying to read a non-existent file
    process_file("non_existent_file.txt");
    
    return 0;
}
