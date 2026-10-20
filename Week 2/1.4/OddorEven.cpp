#include <iostream>

int main(){
    int n, rem;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;

    rem = n % 2;
    // The % gives the remainder after the divison

    std::cout << "In the following a 0 will represent an even number and a 1 will represent an odd number: " << std::endl;
    std::cout << rem << std::endl;
    
