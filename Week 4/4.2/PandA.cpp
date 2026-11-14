#include <iostream>

double calc(double a1, double a2, double& area, double& perimeter){
    area = a1 * a2;
    perimeter = (2*a1)+(2*a2);
    return area;
}

int main(){
    double a, b;
    std::cout << "Please enter the length and width of the rectangle: " << std::endl;
    std::cin >> a >> b;

    double s1, s2;
    calc(a,b, s1, s2);

    std::cout << "The area is " << s1 << std::endl;
    std::cout << "The perimeter is " << s2 << std::endl;
}