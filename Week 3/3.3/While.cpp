#include <iostream>

int main(){
    int n, column=0, row = 0;
    std::cin >> n;

    while (column<n){
            while (row < n){
            std::cout << '*';
            row = row + 1;
            }
        row = 0;
        std::cout << std::endl;
        column=column+1;
    }
}