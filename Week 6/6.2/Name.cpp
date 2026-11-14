#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <string>

int main(){
    std::vector<int> v;
    std::string inputfilename;
    std::cout << "Enter the name of the input file: " << std::endl;
    std::cin >> inputfilename;

    std::ifstream infile;
    infile.open(inputfilename);

    if (!infile.is_open()){
        std::cout << "Error in finding the file" << std::endl;
        return EXIT_FAILURE;
    }
    
    int tmp;
    while (infile >> tmp){
        v.push_back(tmp);
    }

    infile.close();

    std::string outputfilename;
    std::cout << "Enter the name of the output file" << std::endl;
    std::cin >> outputfilename;

    std::ofstream outfile;
    outfile.open(outputfilename);

    if (!outfile.is_open()){
        std::cout << "Error in finding the file" << std::endl;
        return EXIT_FAILURE;
    }

    for (int i=0; i<v.size(); i++){
        outfile << v[v.size()-1-i] << std::endl;
    }

    outfile.close();
}