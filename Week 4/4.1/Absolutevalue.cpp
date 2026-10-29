#include <iostream>
#include <cmath>

int main(){
    double n;
    std::cout << "Please enter a number: " << std::endl;
    std::cin >> n;

    std::cout << "|" << n << "|" << "=" << std::abs(n) << std::endl;
}