#include <iostream>
#include <vector>
#include <string>


void parser(std::vector<std::string> v){
    bool isnumber;
    bool isidentifier;
    bool isreservedword;
    std::cout << "Token               number      identifier      reserved word\n";
    for (auto e : v) {  // runs once for every output
        isnumber = true;
        isidentifier = true;
        isreservedword = true;
        if (!isdigit(e[0])) {  // for strings beginning with a number
            isidentifier = false;
            isreservedword = false;
            for (int i = 1; i < e.size(); i++) {  // check every character until nondigit or end
                if (!isdigit(e[i])) {
                    isnumber = false;                        break;
                }
                // (if the for loop exits naturally, the difference is that
                // isnumber will never have been set to false)
            }
        } else {
            if (e == "while"   ||
                e == "for"     ||
                e == "switch"  ||
                e == "do"      ||
                e == "return") {  // if the string is a reserved word, set 
                                  // isidentifier to false befre the end of
                                  // the primary loop
                    isidentifier = false;
                }
        }
    // At this point, every possible type of word in C++ has been tested for
    // String output control wth if-statements
    std::cout << e << "                 "           ;
    if(isnumber) std::cout << "yes          "       ;
    else std::cout << "no            "              ;
    if(isidentifier) std::cout << "yes             ";
    else std::cout << "no              "            ;
    if(isreservedword) std::cout << "yes\n"         ;
    else std::cout << "no\n"                        ;
    }
    return;
}