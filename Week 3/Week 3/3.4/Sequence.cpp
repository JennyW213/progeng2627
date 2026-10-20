#include <iostream>

int main(){
    int n, num;
    std::cin >> n;

    while (n!=1){
        if ((n%2)==0){
            num = n/2;
        }
        else{
            num = (3*n)+1;
        }
    n = num;
    std::cout << n;
    std::cout << "\t";
    }
}