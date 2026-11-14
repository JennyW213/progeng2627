#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<double>& vin){
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
    int n = 3;

    std::vector<double> not_found {2,5,7};
    std::cout << "Test not_found: " << (search_vector(n, not_found) == -1) << std::endl;

    std::vector<double> found_at1 {2,3,5,3};
    std::cout << "Test found_at1 first occurrence: " << (search_vector(n, found_at1) == 1) << std::endl;

    std::vector<double> found_at3 {2,7,9,3};
    std::cout << "Test found_at3: " << (search_vector(n, found_at3) == 3) << std::endl;
    
}