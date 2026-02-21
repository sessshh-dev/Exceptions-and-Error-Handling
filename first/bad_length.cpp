#include "bad_length.h"

int function(const std::string& str, int forbidden_length){
    int length = str.length() / 2;
    if (str.length() == forbidden_length){
        throw "bad_length";
    }
    return static_cast<int>(str.length());
}
