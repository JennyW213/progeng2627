#include <iostream>

int integerdivision(int i1, int i2){
    int integerdivision;
    integerdivision = i1/i2;
    return integerdivision;
}

int remainder(int s1, int s2){
    int remainder;
    remainder = s1%s2;
    return remainder;
}

int main(){
    int a, b;

    std::cout << "Enter two numbers a divided by b: " << std::endl;
    std::cin >> a >> b;
    std::cout << a << "/" << b << "=" << std::endl;
    std::cout << integerdivision(a, b) << std::endl;
    std::cout << "With the remainder: " << remainder(a, b) << std::endl;
}