#include <iostream>

void myswap( std::string& a, std::string& b){
    std::string tmp;
    tmp = a;
    a = b;
    b = tmp;

}

int main(){
    std::string a, b;
    
    std::cout << "Please enter two words: " << std::endl;
    std::cin >> a >> b;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    myswap( a, b);

    std::cout << "The words have swapped: " << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
}