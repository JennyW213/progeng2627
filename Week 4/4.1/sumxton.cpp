#include <iostream>
#include <cmath>

int main(){
    double x, n, sum = 0;
    std::cout << "Enter the base: " << std::endl;
    std::cin >> x;
    std::cout << "Enter the n to go up to: " << std::endl;
    std::cin >> n;

    for (int i=1; i < (n+1); i++){
        std::cout << "x^" << i << "=" << std::pow(x,i) << std::endl;
        sum = sum + std::pow(x,i);
    }

    std::cout << "The sum of the powers are: " << sum << std::endl;
}