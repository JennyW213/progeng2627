#include <iostream>

int main(){
    int s1, s2, perimeter, area;

    std::cout << "Enter the first side of the rectangle: " << std::endl;
    std::cin >> s1;

    std::cout << "Enter the second side of the rectangle: " << std::endl;
    std::cin >> s2;

    perimeter = 2*(s1+s2);
    area = s1*s2;

    std::cout << "The perimeter of the rectangle: " << perimeter << std::endl;
    std::cout << "The area of the rectangle: " << area << std::endl;
}