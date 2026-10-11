#include <iostream>

int main(){
    int n1, rem;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> n1;

    rem = n1 / 2;

    if (rem==0){;
        std::cout << "The remainder of the number/2 is 0 so therefore " << n1 << "is even!" << std::endl;
    }else{;
        std::cout << "The remainder of the number/2 is 1 so therefore " << n1 << "is odd!" << std::endl;
    }
}