#include <iostream>
#include <vector>

double sum_vector(const std::vector<double>& vin){
    double sum = 0;
    vin.push_back(2);
    
    for (int i=0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;
}

int main(){
    std::vector<double> v;

    v.push_back(3);
    v.push_back(0.5);
    v.push_back(-1);

    std::cout << "The sum of the vectors are: " << sum_vector(v) << std::endl;
}