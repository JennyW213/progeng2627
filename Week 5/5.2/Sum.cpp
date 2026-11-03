#include <iostream>
#include <vector>

double sum_vector(std::vector<double> vin){
    double sum = 0;

    for (int i=0; i<vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;
    
}

int main(){
    std::vector<double> v;
    int n, tmp;
    std::cout << "Please enter a number n: " << std::endl;
    std::cin >> n;
    for (int j=0; j<n; j++){
        std::cin >> tmp;
        v.push_back(tmp);
    }

    std::cout << "The sum of the vector is: " << sum_vector(v) << std::endl;
}