#include <iostream>
#include "bad_length.h"
#include "function.h"

int main(){
    int forbidden_length;
    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;
    std::string word;

    while (true){
        try{
            std::cout << "Введите слово: ";
            std::cin >> word;

            int len = function(word, forbidden_length);
            std::cout << "Длина слова \"" << word << "\" равна " << len << std::endl;
            }
            catch (const bad_length& i){
                std::cout << i.what() << "До свидания" << std::endl;
                break;
            }
    }

    return EXIT_SUCCESS;
}
