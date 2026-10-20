#include <iostream>

int main(){
    int n, column=0;
    std::cin >> n;

    while (column<n){
        column=column+1;
        std::cout << std::string(n,'*');
        std::cout << std::endl;
    }
}