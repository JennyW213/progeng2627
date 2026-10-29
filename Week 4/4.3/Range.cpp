#include <iostream>

int smallest_factor(int n1, int n2){
    int factor;

    if (n1 < 2){
        return 1;
    }

    for(int cf = 2; cf < n2; cf++){
        if( (n1 % cf) == 0){
            return cf;
        }
    }

    return n1;
}

int main(){
    int n1, n2;
    std::cout << "Please enter two numbers such as [n1,n2] in this range: " << std::endl;
    std::cin >> n1 >> n2;
    std::cout << "Prime numbers between " << n1 << " and " << n2 << " are:" << std::endl;
    for(int cf = n1; cf <= n2; cf++){
        if (cf >= 2 && smallest_factor(cf, cf) == cf){
                std::cout << cf << " " << std::endl;
        }
    }
}
