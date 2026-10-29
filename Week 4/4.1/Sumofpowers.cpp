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

int main(){
    double n1, n2, n3, n4;
    std::cout << "2^3: " << mypow(2,3) << std::endl;
    n1 = mypow(2,3);
    std::cout << "0.5^2: " << mypow(0.5,2) << std::endl;
    n2 = mypow(0.5,2);
    std::cout << "1^0: " << mypow(1,0) << std::endl;
    n3 = mypow(1,0);
    std::cout << "2^(-3): " << mypow(2,-3) << std::endl;
    n4 = mypow(2,-3);
    std::cout << "Sum is " << n1 + n2 + n3 + n4 << std::endl;
}