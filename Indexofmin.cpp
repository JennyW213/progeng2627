#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    int smallest = 0, i;
    if (vin.size()==0){
        return -1;
    }
    else{
        for (int i=0; i < vin.size()-1; i++){
            if ((vin[i+1]) < (vin[smallest])){
                smallest = i+1;
            }
        }

        return smallest;
    }
}

int main(){
    std::vector<double> v;
    int n;
    double tmp;
    std::cout << "Please enter a number for n: " << std::endl;
    std::cin >> n;

    for (int j=0; j<n; j++){
        std::cout << "Please enter a number: " << std::endl;
        std::cin >> tmp;
        v.push_back(tmp);
    }

    std::cout << "The smallest number index: " << min_vector_element(v) << std::endl;

}