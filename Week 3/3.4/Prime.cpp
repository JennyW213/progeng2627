#include <iostream>

int main(){
    int n;
    bool found_factor = false;

    std::cout << "Please enter an integer greater than 1: " << std::endl;
    std::cin >> n;

    for (int cf=2; cf<n; cf++){
        if ((n%cf)==0) {
            found_factor = true;
        }
    }

    if(found_factor){
        std::cout << "This is not a prime" << std::endl;
    }
    else{
        std::cout << "This is a prime" << std::endl;
    }
}