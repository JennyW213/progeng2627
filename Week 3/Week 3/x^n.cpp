#include <iostream>

int main(){
    double x, acc = 1, n;
    std::cin >> x >> n;

    for (int i=0; i<n; i++){
        acc = acc*x;
    }
    
    std::cout << x << "^" << n << "=" << acc << std::endl;
}