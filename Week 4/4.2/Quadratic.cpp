#include <iostream>
#include <cmath>

bool quadsolver(double a, double b, double c, double& x1, double& x2){
    bool realsol;
    double delta = b*b - (4*a*c);

    if (delta<0){
        realsol = false;
    }
    else{
        realsol = true;
        x1 = (-b + std::sqrt(delta))/(2*a);
        x2 = (-b - std::sqrt(delta))/(2*a);
    }

    return realsol;

}

int main(){
    double a, b, c;

    std::cout << "This program finds the real solutions of " << std::endl;
    std::cout << "the quadratic equation in the form ax^2 + bx + c: " << std::endl;
    std::cout << "Please enter the coefficients a, b, c: " << std::endl;

    std::cin >> a >> b >> c;

    double s1, s2;

    if (quadsolver(a, b, c, s1, s2)){
        std::cout << "The solutions are: " << std::endl;
        std::cout << s1 << std::endl;
        std::cout << s2 << std::endl;
    }
    else{
        std::cout << "There are not real solutions" << std::endl;
    }

}