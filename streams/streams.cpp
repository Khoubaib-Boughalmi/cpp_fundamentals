#include <iostream>
#include <fstream>

int main() {
    std::ofstream outputFile("output.txt"); // Create an output file stream

    if (outputFile.is_open()) {
        outputFile << "Hello, World!" << std::endl;
        outputFile << "This is a sample line of text." << std::endl;
        outputFile.close();
        std::cout << "Data written to file successfully." << std::endl;
    } else {
        std::cout << "Unable to open the file." << std::endl;
    }

    std::ifstream inputFile("output.txt"); // Create an input file stream

    if (inputFile.is_open()) {
        std::string line;
        while (std::getline(inputFile, line)) {
            std::cout << line << std::endl;
        }
        inputFile.close();
    } else {
        std::cout << "Unable to open the file." << std::endl;
    }

    return 0;
}
