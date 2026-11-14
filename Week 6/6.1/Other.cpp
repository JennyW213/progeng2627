#include <iostream>
#include <fstream>
#include <cstdlib>

int main(){
    std::ifstream infile;
    std::string name;

    std::cout << "Enter the name of the file: " << std::endl;
    std::cin >> name;
    infile.open(name);

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