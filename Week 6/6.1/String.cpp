#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int main(){
    std::ifstream infile;
    infile.open("text.txt");

    std::vector<std::string> v;

    if (!infile.is_open()){
        std::cout << "Error in finding the file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp; 

    while (infile >> tmp){
        v.push_back(tmp);
    }

    for (int i=0; i<v.size(); i++){
        std::cout << v[v.size()-1-i] << std::endl;
    }

    infile.close();
}