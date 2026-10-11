#include <iostream>

int main(){
    int n, rem;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;

    rem = n % 3;

    if (rem == 0){
        std::cout << n << " is a mutliple of 3!" << std::endl;
    }
    else{
        std::cout << n << " is not a multiple of 3!" << std::endl;
    }
}