// The strategy for this will be to use recursion through many different states
// in order to trace the word given

#include <iostream>

    std::string word_in_progress;

// State S defined as a recursive function
    std::string S(std::string w, int pos) {
        if (pos == w.length()) {  // Base case: the word ends without a '$'; indicate failure
            word_in_progress = "INVALID";
            return "";
        } else if (w[pos + 1] == '$') {  // Base case: the word ends with a '$'; indicate failure
                                         // (this is only because state S is non-terminal)
            word_in_progress = "INVALID";
            return "";
        } else if (w[pos + 1] == 'a') {  // Recursive case: the word follows the grammar to advance to state S
            return "a" + S(w, (pos + 1));
        } else if (w[pos + 1] == 'b') {  // Recursive case: the word follows the grammar to advance to state B
            return "a" + B(w, (pos + 1));
        } else if (w[pos + 1] == 'c') {  // Recursive case: the word follows the grammar to advance to state C
            return "a" + C(w, (pos + 1));
        } else {
            word_in_progress = "INVALID";  // Recursive case: any other garbage input indicates failure
            return "";
        }
    };

    std::string A(std::string w, int pos) {
        if (pos == w.length()) {  // Base case: the word ends without a '$'; indicate failure
            word_in_progress = "INVALID";
            return "";
        } else if (w[pos + 1] == '$') {  // Base case: the word ends with a '$'; indicate failure
                                         // (this is only because state S is non-terminal)
            word_in_progress = "INVALID";
            return "";
        } else if (w[pos + 1] == 'a') {  // Recursive case: the word follows the grammar to advance to state S
            return "a" + S(w, (pos + 1));
        } else if (w[pos + 1] == 'b') {  // Recursive case: the word follows the grammar to advance to state B
            return "a" + B(w, (pos + 1));
        } else if (w[pos + 1] == 'c') {  // Recursive case: the word follows the grammar to advance to state C
            return "a" + C(w, (pos + 1));
        } else {
            word_in_progress = "INVALID";  // Recursive case: any other garbage input indicates failure
            return "";
        }
    };

    std::string B(std::string w, int pos) {
        if (pos == w.length()) {  // Base case: the word ends without a '$'; indicate failure
            word_in_progress = "INVALID";
            return "";
        } else if (w[pos + 1] == '$') {  // Base case: the word ends with a '$'; indicate failure
                                         // (this is only because state S is non-terminal)
            word_in_progress = "INVALID";
            return "";
        } else if (w[pos + 1] == 'a') {  // Recursive case: the word follows the grammar to advance to state S
            return "a" + S(w, (pos + 1));
        } else if (w[pos + 1] == 'b') {  // Recursive case: the word follows the grammar to advance to state B
            return "a" + B(w, (pos + 1));
        } else if (w[pos + 1] == 'c') {  // Recursive case: the word follows the grammar to advance to state C
            return "a" + C(w, (pos + 1));
        } else {
            word_in_progress = "INVALID";  // Recursive case: any other garbage input indicates failure
            return "";
        }
    };

    std::string C(std::string w, int pos) {
        if (pos == w.length()) {  // Base case: the word ends without a '$'; indicate failure
            word_in_progress = "INVALID";
            return "";
        } else if (w[pos + 1] == '$') {  // Base case: the word ends with a '$'; indicate failure
                                         // (this is only because state S is non-terminal)
            word_in_progress = "INVALID";
            return "";
        } else if (w[pos + 1] == 'a') {  // Recursive case: the word follows the grammar to advance to state S
            return "a" + S(w, (pos + 1));
        } else if (w[pos + 1] == 'b') {  // Recursive case: the word follows the grammar to advance to state B
            return "a" + B(w, (pos + 1));
        } else if (w[pos + 1] == 'c') {  // Recursive case: the word follows the grammar to advance to state C
            return "a" + C(w, (pos + 1));
        } else {
            word_in_progress = "INVALID";  // Recursive case: any other garbage input indicates failure
            return "";
        }
    };

    std::string D(std::string w, int pos) {
        if (pos == w.length()) {  // Base case: the word ends without a '$'; indicate failure
            word_in_progress = "INVALID";
            return "";
        } else if (w[pos + 1] == '$') {  // Base case: the word ends with a '$'; indicate failure
                                         // (this is only because state S is non-terminal)
            word_in_progress = "INVALID";
            return "";
        } else if (w[pos + 1] == 'a') {  // Recursive case: the word follows the grammar to advance to state S
            return "a" + S(w, (pos + 1));
        } else if (w[pos + 1] == 'b') {  // Recursive case: the word follows the grammar to advance to state B
            return "a" + B(w, (pos + 1));
        } else if (w[pos + 1] == 'c') {  // Recursive case: the word follows the grammar to advance to state C
            return "a" + C(w, (pos + 1));
        } else {
            word_in_progress = "INVALID";  // Recursive case: any other garbage input indicates failure
            return "";
        }
    };
    
int main(){

    std::string word;
    std::cout << "Welcome to Grammar Acceptor by Maxwell Trotter\n";
    std::cout << "Please input a string to be checked against the grammar: \n";
    std::cin >> word;


    

    return 0;
}