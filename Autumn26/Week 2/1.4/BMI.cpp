#include <iostream>

int main(){
    int weight, height, BMI;
    std::cout << "Enter your weight in kilograms: " << std::endl;
    std::cin >> weight;
    
    std::cout << "Enter your height in meters: " << std::endl;
    std::cin >> height;

    BMI = (height*height)/weight;
    std::cout << "Your BMI is: " << BMI << std::endl;

}