#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){
    int j, output;
    for (int j=0; j < vin.size(); j++){
        if (vin[j] == n){
            return j;
        }
        else{
            output = -1;
        }
    }

    return output;
}

int main(){
    std::vector<int> v;
    int num, n;
    double tmp;

    std::cout << "Please enter the number num: " << std::endl;
    std::cin >> num;

    for (int i=0; i<num; i++){
        std::cout << "Please enter a number: " << std::endl;
        std::cin >> tmp;
        v.push_back(tmp);
    }

    std::cout << "Please enter the number n: " << std::endl;
    std::cin >> n;

    std::cout << "The index to be found : " << search_vector(n, v) << std::endl;
}