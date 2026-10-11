#include <iostream>

int main(){
    int n, rem;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;

    rem = n % 2;

    if (rem == 0){
        std::cout << "The remainder of the " << n << "/2 is 0 so therefore " << n << " is even!" << std::endl;
    }
    else{
        std::cout << "The remainder of the " << n << "/2 is 1 so therefore " << n << " is odd!" << std::endl;
    }
}