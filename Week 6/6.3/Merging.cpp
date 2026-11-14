#include <iostream>
#include <vector>

void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged){
    int i=0, j=0; // start initial values from 0
    while(i < v1.size() && j < v2.size()){
        if (v1[i]<=v2[j]){
            merged.push_back(v1[i]);
            i++;
        }
        else{
            merged.push_back(v2[j]);
            j++;
        }
    }

    while (i<v1.size()){
        merged.push_back(v1[i]);
        i++;
    }

    while (j<v2.size()){
        merged.push_back(v2[j]);
        j++;
    }
}

int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 7, 8, 11};
    v2 = {4, 6, 10};
    expected_output = {1, 4, 6, 7, 8, 10, 11};

    merge_vectors_int(v1, v2, out);

    if (out == expected_output){ // compare the contents of the vectors
        std::cout << "Passed" << std::endl;
    }
    else{
        std::cout << "Not Passed" << std::endl;
    }
}