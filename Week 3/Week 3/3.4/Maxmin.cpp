#include <iostream>

int main(){
    int n, curmax, curmin;
    std::cout << "Please enter a number: " << std::endl;
    std::cin >> n;

    curmax = n;
    curmin = n;

    std::cout << "The maximum so far: " << curmax << std::endl;
    std::cout << "The minimum so far: " << curmin << std::endl;

    while (n!=0){
        std::cout << "Please enter a number: " << std::endl;
        std::cin >> n;
        if (n>curmax){
            curmax = n;
        }
        else if (n<curmin){
            curmin = n;
        }
    std::cout << "The maximum so far: " << curmax << std::endl;
    std::cout << "The minimum so far: " << curmin << std::endl;
    }
}