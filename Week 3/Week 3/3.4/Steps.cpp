#include <iostream>

int main(){
    int n, num, counter=0;
    std::cin >> n;

    while (n!=1){
        if ((n%2)==0){
            num = n/2;
        }
        else{
            num = (3*n)+1;
        }
    n = num;
    counter = counter + 1;
    std::cout << n;
    std::cout << "\t";
    }
    
    std::cout << std::endl;  
    std::cout << "1 is reached in " << counter << " steps" << std::endl;
}
