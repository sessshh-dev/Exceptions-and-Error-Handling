#include <iostream>
#include "bad_length.h"

int main(){
    int forbidden_length;
    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;
    std::string word;

    while (true){
        std::cout << "Введите слово: ";
        std::cin >> word;

        try{
            int len = function(word, forbidden_length);
            std::cout << "Длина слова \"" << word << "\" равна " << len << std::endl;
        }
        catch (const char*){
            std::cout << "Вы ввели слово запретной длины! До свидания" << std::endl;
            break;
        }
    }

    return EXIT_SUCCESS;
}
