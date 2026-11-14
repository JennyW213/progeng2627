#include <iostream>

double mypow(double base, int exp){
    double result, acc=1;
    if (exp == 0){
        result = 1;
    }
    else if (exp > 0){
        for (int i=0; i<(exp); i++){
            acc = acc*base;
            result = acc;
    
        }
    }
    else{
        for (int i=0; i<(-(exp)); i++){
            acc = acc/base;
            result = acc;
        }
    }
    return result;

}

double sum(int x,int n){
    double acc =0; 
    for (int i=1; i<(n+1); i++){
        acc = acc + mypow (x,i);
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