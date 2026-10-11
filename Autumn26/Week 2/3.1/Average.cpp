#include <iostream>

int main(){
    int n, counter=0;
    double sum = 0, average;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;

    while (n!=0){
        counter = counter + 1; 
        sum = sum + n;
        average = sum/counter;
        std::cout << "The average so far is: " << std::endl;
        std::cout << average << std::endl;
        std::cout << "Enter a number: " << std::endl;
        std::cin >> n;
    }
}
