#include <iostream>

int main(){
    int Celsius, Fahrenheit;
    std::cout << "Enter a temperature in Celsius degrees: " << std::endl;
    std::cin >> Celsius;
    
    Fahrenheit = (Celsius*1.8)+32;
    
    std::cout << "The equivalent temperature in Fahrenheit degrees is: " << Fahrenheit << std::endl;
    
}