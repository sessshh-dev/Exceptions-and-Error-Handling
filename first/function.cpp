#include "function.h"
#include "bad_length.h"


int function(const std::string& str, int forbidden_leigth){
    if (static_cast<int>(str.length()) == forbidden_leigth){
        throw bad_length("Вы ввели слово запретной длины!");
    }
    return static_cast<int>(str.length());
}