// Compile: clang++ token_reader.cpp -o tokenreader.o -std=c++20
// Execute: ./token_reader.o

#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {

    if (argc != 2) {  // If there is no input file, kill the program
        std::cout << "Run this program with an input file, e.g. '$ ./token_reader.o sample.txt'\n";
        return 0;
    }
    std::ofstream infile;
    // DEBUG: std::cout << argv[0] << argv[1];
    infile.open(argv[1]);
    std::cout << "Reading from " << argv[1] << ":\n";
}