#include <iostream>

int myfactorial (int in){
    int fact = 1;
    for (int i=0; i<in; i++){
        fact = fact * (in-i);
    }

    return fact;
}

int main(){
    int n;
    std::cout << "Please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "Factorial of " << n << ": " << myfactorial(n) << std::endl;
}