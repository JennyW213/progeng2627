#include <iostream>

int main(){
    double a, b, c;

    a = 1;
    b = 2;
    c = a + b;

    std::cout << c << std::endl;
    // This will print a 3

    a = 2;

    std::cout << c << std::endl;
    // The value 3 to be printed

    c = a + b;

    std::cout << c << std::endl;
    // The value 4 to be printed

}