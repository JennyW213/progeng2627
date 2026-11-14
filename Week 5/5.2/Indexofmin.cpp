#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    int smallest = 0;
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
    std::vector<double> empty_v;
    std::cout << "Test Empty: " << (min_vector_element(empty_v) == -1) << std::endl;

    std::vector<double> first_v{2,4,6};
    std::cout << "Test first: " << (min_vector_element(first_v) == 0) << std::endl;

    std::vector<double> normal_v{7,5,2,9};
    std::cout << "Test normal: " << (min_vector_element(normal_v) == 2) << std::endl;

    std::vector<double> end_v{5,6,7,2};
    std::cout << "Test end: " << (min_vector_element(end_v) == 3) << std::endl;
}