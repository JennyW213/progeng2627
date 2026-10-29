#include <iostream>

double sum(int x,int n){
    double sum, acc =0, count = 1, number; 
    for (int i=1; i<(n+1); i++){
        number = count * x;
        count = number;
        acc = acc + number;
    }

    return acc;
}

int main(){
    double x, n;
    std::cout << "Enter the base: " << std::endl;
    std::cin >> x;
    std::cout << "Enter the exponent: " << std::endl;
    std::cin >> n;
    std::cout << "The sum of powers are " << sum(x,n) << std::endl;
}