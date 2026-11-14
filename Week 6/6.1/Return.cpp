#include <iostream>
#include <fstream>
#include <cstdlib>

int main(){
    std::ifstream infile;

    infile.open("sum.txt");

    if (!infile.is_open()){
        std::cout << "Error in finding the file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while (infile >> tmp){
        std::cout << tmp << std::endl;
    }

    infile.close();
}