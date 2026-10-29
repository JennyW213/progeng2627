#include <iostream>

int smallest_factor(int n){
    int factor;
    for (int cf=2; cf < n; cf++){
        if ((n % cf) == 0){
            factor = cf;
            return cf;
        }
        else{
            factor = 0;
        }
    }

    return factor;
}

int main(){
    int n;
    std::cout << "Please enter a number greater than 1" << std::endl;
    std::cin >> n;
    smallest_factor(n);
    std::cout << "The smallest prime factor: " << smallest_factor(n) << std::endl;
}