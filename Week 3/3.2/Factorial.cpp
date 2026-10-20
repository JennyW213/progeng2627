#include <iostream>

int main(){
    int n, acc=1, factorial ;
    std::cin >> n;

    for (int i=0; i<n; i++){
        factorial = acc*(n-i);
        acc=factorial;
    }

    std::cout << factorial << std::endl;

}