// Compile/Link: clang++ token_reader.cpp -o tokenreader.o -std=c++20
// Execute: ./token_reader.o sample.txt

#include <iostream>
#include <fstream>
#include <vector>
#include "parser.cpp"

int main(int argc, char* argv[]) {
    std::cout << "Welcome to Token Reader by Maxwell Trotter!\n";

    if (argc != 2) {  // If there is no input file, kill the program
        std::cout << "Run this program with an input file, e.g. '$ ./token_reader.o sample.txt'\n";
        std::cout << "Quitting.\n";
        return 0;
    }
    std::ifstream infile;
    infile.open(argv[1]);
    std::cout << "Reading from " << argv[1] << ":\n";

    // store every line as a string and put it in a vector
    std::vector<std::string> input_v;
    std::string temp;
    while (!infile.eof()) {
        infile >> temp;
        std::cout << temp << "\n";
        input_v.push_back(temp);
    }
    std::cout << "\n";  // Visual design appeal

    // DEBUG: for (auto element : input_v) { std::cout << element << " | "; }
    parser(input_v);
    return 0;
}