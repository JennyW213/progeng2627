#include <iostream>
#include <vector>

void append_vector(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){

    for (int i=0; i<vin1.size(); i++){
        vout.push_back(vin1[i]);
    }

    for (int i=0; i<vin2.size(); i++){
        vout.push_back(vin2[i]);
    }
}

int main(){
    std::vector<int> vin1, vin2, v;
    vin1 = {2,3,4};
    vin2 = {3,5,8};

    append_vector(vin1, vin2, v);

    for (int i=0; i < v.size(); i++){
        std::cout << v[i] << std::endl;
    }
}