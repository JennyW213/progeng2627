#include <iostream>

int main(){
    int n, row;
    std::cin >> n;

 for (int i=1; i<=n; i++){
    std::cout << i;
    std::cout << "\t";
    }

std::cout << std::endl;

for (int c=2; c<=n; c++){
    for (int counter=1; counter<=n; counter++){
        row = c*counter;
        std::cout << row;
        std::cout << "\t";
    }
    std::cout << std::endl;
}    
}
