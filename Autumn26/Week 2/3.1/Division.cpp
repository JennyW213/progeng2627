#include <iostream>

int main(){
    int a, b, subtraction, quotient = 0, remainder;

    std::cout << "Enter the integer to be divided: " << std::endl;
    std::cin >> a;
    std::cout << "Enter the what the integer is divided by: " << std::endl;
    std::cin >> b;

    std::cout << "We want to perform the integer division of " << a << " by " << b << std::endl;

    while (a>b){
        std::cout << a << " is greater than " << b << " so we subtract " << b << " from " << a << std::endl;
        subtraction = a - b;
        std::cout << "We get " << subtraction << std::endl;
        a = subtraction;
        quotient = quotient + 1;
    }

    std::cout << subtraction << " is not greater than " << b << " so we stop the loop" << std::endl;
    remainder = subtraction;
    std::cout << "The quotient is the number of subtractions: " << quotient << std::endl;
    std::cout << "The remainder is the number we have left at the end: " << remainder << std::endl;
}