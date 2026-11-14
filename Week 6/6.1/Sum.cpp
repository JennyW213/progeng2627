#include <iostream>
#include <fstream>

int main(){
    std::ifstream infile;

    infile.open("input.txt");

    if (infile.is_open()){
        int tmp, sum = 0;

        while (infile >> tmp){
            std::cout << tmp << std::endl;
            sum = sum + tmp;
        }

        std::cout << "The sum of all the numbers are: " << sum << std::endl;
        infile.close();
    }
    else{
        std::cout << "Error in finding the file" << std::endl;
    }


}