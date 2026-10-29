#include <iostream>

double max(int n1,int n2){
    double max;
    if (n1>n2){
        max = n1;
    }
    else{
        max = n2;
    }

    return max;
}

int main(){
    double n1, n2;
    std::cout << "Enter 2 numbers: " << std::endl;
    std::cin >> n1 >> n2;
    std::cout << "The maximum of two numbers: " << max(n1,n2) << std::endl;
}