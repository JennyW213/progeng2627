#include <iostream>

double area(double& a1, double& a2){
    double area;
    area = a1 * a2;
    return area;
}

double perimeter(double& s1, double& s2){
    double perimeter;
    perimeter = (2*s1)+(2*s2);
    return perimeter;
}

int main(){
    double a, b;
    std::cout << "Please enter the length and width of the rectangle: " << std::endl;
    std::cin >> a >> b;

    std::cout << "The area is " << area(a, b) << std::endl;
    std::cout << "The perimeter is " << perimeter(a, b) << std::endl;
}