#include <iostream>
#include <vector>

int main(){
    int n, t, number;
    std::cout << "Please enter a number n to read n numbers from the user: " << std::endl;
    std::cin >> n;

    std::vector <int> v;
    for (int i=0; i<n; i++){
        std::cin >> number;
        v.push_back(number);
    }

    std::cout << "Please enter a number which outputs the numbers less than this number: " << std::endl;
    std::cin >> t;

    for (int j=0; j<n; j++){
        if (v[j]<t){
        std::cout << v[j] << std::endl;
        }
    }
}