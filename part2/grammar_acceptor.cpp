// Maxwell Trotter, Joseph Eggers
// @maxwelltrotter, @crimsongnome
// CPSC 323

// The strategy for this program will be to use recursion through many different states
// in order to trace the word given

#include <iostream>

// This string is set to "INVALID" if the string deviates from the grammar of the language by state functions
std::string grammaticality = "VALID";
// Declarations of recursive functions representing grammar states
std::string S(std::string w, int pos);
std::string B(std::string w, int pos);
std::string C(std::string w, int pos);
std::string D(std::string w, int pos);

// State S defined as a recursive function
    std::string S(std::string w, int pos) {
        if (pos == w.length()) {  // Base case: the word ends without a '$'; indicate failure
            grammaticality = "INVALID, no $\n";
            return "";
        } else if (w[pos] == '$') {  // Base case: the word ends with a '$'; indicate failure
                                         // (this is only because state S is non-terminal)
            grammaticality = "INVALID";
            return "";
        } else if (w[pos] == 'a') {  // Recursive case: the word follows the grammar to advance to state S again
            return "a" + S(w, (pos + 1));
        } else if (w[pos] == 'b') {  // Recursive case: the word follows the grammar to advance to state B
            return "b" + B(w, (pos + 1));
        } else if (w[pos] == 'c') {  // Recursive case: the word follows the grammar to advance to state C
            return "c" + C(w, (pos + 1));
        } else {
            grammaticality = "INVALID - bad data";  // Base case: any other garbage input indicates failure
            return "";
        }
    };

// State B defined as a recursive function
    std::string B(std::string w, int pos) {
        if (pos == w.length()) {  // Base case: the word ends without a '$'; indicate failure
            grammaticality = "INVALID, no $\n";
            return "";
        } else if (w[pos] == '$') {  // Base case: the word ends with a '$'; begin unwinding (state B is terminal)
            return "$";
        } else if (w[pos] == 'a') {  // Recursive case: the word follows the grammar to advance to state C
            return "a" + C(w, (pos + 1));
        } else if (w[pos] == 'b') {  // Recursive case: the word follows the grammar to advance to state B again
            return "b" + B(w, (pos + 1));
        } else if (w[pos] == 'c') {  // Recursive case: the word follows the grammar to advance to state D
            return "c" + D(w, (pos + 1));
        } else {
            grammaticality = "INVALID - bad data";  // Base case: any other garbage input indicates failure
            return "";
        }
    };

// State C defined as a recursive function
    std::string C(std::string w, int pos) {
        if (pos == w.length()) {  // Base case: the word ends without a '$'; indicate failure
            grammaticality = "INVALID, no $\n";
            return "";
        } else if (w[pos] == '$') {  // Base case: the word ends with a '$'; begin unwinding (state C is terminal)
            return "$";
        } else if (w[pos] == 'a') {  // Recursive case: the word follows the grammar to advance to state S
            return "a" + S(w, (pos + 1));
        } else if (w[pos] == 'b') {  // Recursive case: the word follows the grammar to advance to state D
            return "b" + D(w, (pos + 1));
        } else if (w[pos] == 'c') {  // Recursive case: the word follows the grammar to advance to state D
            return "c" + D(w, (pos + 1));
        } else {
            grammaticality = "INVALID - bad data";  // Base case: any other garbage input indicates failure
            return "";
        }
    };

// State D defined as a recursive function
    std::string D(std::string w, int pos) {
        if (pos == w.length()) {  // Base case: the word ends without a '$'; indicate failure
            grammaticality = "INVALID, no $\n";
            return "";
        } else if (w[pos] == '$') {  // Base case: the word ends with a '$'; indicate failure
                                         // (this is only because state D is non-terminal)
            grammaticality = "INVALID";
            return "";
        } else if (w[pos] == 'a') {  // Recursive case: the word follows the grammar to advance to state B
            return "a" + B(w, (pos + 1));
        } else if (w[pos] == 'b') {  // Recursive case: the word follows the grammar to advance to state D
            return "a" + D(w, (pos + 1));
        } else if (w[pos] == 'c') {  // Recursive case: the word follows the grammar to advance to state C
            return "a" + C(w, (pos + 1));
        } else {
            grammaticality = "INVALID - bad data";  // Recursive case: any other garbage input indicates failure
            return "";
        }
    };

// Main function
int main(){

    std::string word;
    std::cout << "Welcome to Grammar Acceptor by Maxwell Trotter\n";
    std::cout << "Please input a string to be checked against the grammar: \n";
    std::cin >> word;

    std::string trace = S(word, 0);  // Kick off recursive tracing
    std::cout << grammaticality << "\n";
    if (grammaticality == "VALID") {
        std::cout << trace << " is a word in the language!\n";
    }

    return 0;
}