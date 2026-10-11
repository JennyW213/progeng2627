#include <iostream>

int main(){
    int pounds, euros;
    std::cout << "Enter an amount of money in British Pounds: " <<std::endl;
    std::cin >> pounds;

    euros = pounds*1.18;
    std::cout << "The amount of money that you entered in euros is: " << euros << std::endl;
    
}