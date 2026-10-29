#include <iostream>

double max (int n1, int n2, int n3){
    double max;
    if (n1>n2 && n1>n3){
        max = n1;
    }
    else if (n2>n1 && n2>n3){
        max = n2;
    }
    else{
        max = n3;
    }

    return max;
}

int main(){
    double n1, n2, n3;

    std::cout << "Please enter 3 numbers: " << std::endl;
    std::cin >> n1 >> n2 >> n3;
    std::cout << "The maximum of the three numbers are: " << max(n1, n2, n3) << std::endl;
}