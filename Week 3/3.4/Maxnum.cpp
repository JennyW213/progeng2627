#include <iostream>

int main(){
    int n, num, counter=0, curmax;
    std::cin >> n;

    curmax = n; 

    while (n!=1){
        if ((n%2)==0){
            num = n/2;
        }
        else{
            num = (3*n)+1;
        }

        if (num>curmax){
            curmax=num;
        }
    

    n = num;

    counter = counter + 1;
    std::cout << n;
    std::cout << "\t";
    }
    
    std::cout << std::endl;  
    std::cout << "1 is reached in " << counter << " steps" << std::endl;
    std::cout << "The maximum number is : " << curmax << std::endl;
}
