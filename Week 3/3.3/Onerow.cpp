#include <iostream>

int main(){
    int n;
    std::cin >> n;

    for (int c=0; c<n; c++){
        std::cout << "*"; // here there is no std::endl since we want the * to be on the same row
        
    }
}