#include <iostream>
#include <string>

int main(){
    std::string word;
    std::cin >> word;

    while ((word != "stop") && (word != "STOP")&& (word != "Stop")){
        std::cout << word << std::endl;
        std::cin >> word;
    }
}