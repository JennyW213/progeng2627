#include <iostream>

int integerdivision(int i1, int i2, double& quotient, double& remainder){
    quotient = i1/i2;
    remainder = i1%i2;
    return quotient;
}


int main(){
    int a, b;

    std::cout << "Enter two numbers a divided by b: " << std::endl;
    std::cin >> a >> b;
    std::cout << a << "/" << b << "=" << std::endl;
    double q, r;
    integerdivision(a, b, q, r);
    std::cout << q << std::endl;
    std::cout << "With the remainder: " << r << std::endl;
}