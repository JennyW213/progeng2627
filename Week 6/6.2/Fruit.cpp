#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int search_vector(std::string s, const std::vector<std::string>& vin){
        for (int n=0; n<vin.size(); n++){
            if (s==vin[n]){
                return n;
            }
        }
        return -1;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for (int i=0; i<vin1.size(); i++){
        if (search_vector(vin1[i],vout)==-1){
            vout.push_back(vin1[i]);
        }
    }

    for (int j=0; j<vin2.size(); j++)
        if (search_vector(vin2[j],vout)==-1){
            vout.push_back(vin2[j]);
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for (int i=0; i<vin1.size(); i++){
        if ((search_vector(vin1[i],vin2)) != -1){
            if ((search_vector(vin1[i],vout)) == -1){
                vout.push_back(vin1[i]);
            }
        }
    }
}


int main(){
    std::vector<std::string> v1;
    std::vector<std::string> v2;
    std::string inputfilename1;
    std::cout << "Enter the input file name" << std::endl;
    std::cin >> inputfilename1;

    std::ifstream infile1;
    infile1.open(inputfilename1);

    if(!infile1.is_open()){
        std::cout << "Error in finding the file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;
    while (infile1 >> tmp){
        v1.push_back(tmp);
    }

    infile1.close();

    std::ifstream infile2;
    std::string inputfilename2;
    std::cout << "Enter the input 2 file name" << std::endl;
    std::cin >> inputfilename2;

    infile2.open(inputfilename2);

    if(!infile2.is_open()){
        std::cout << "Error in finding the file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp1;
    while (infile2 >> tmp1){
        v2.push_back(tmp1);
    }

    infile2.close();

    std::ofstream outfile1;
    outfile1.open("Union.txt");

    if(!outfile1.is_open()){
        std::cout << "Error in finding the file" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<std::string> u;
    union_vector(v1,v2,u);
    for (int i=0; i<u.size(); i++){
        outfile1 << u[i] << std::endl;
    }

    outfile1.close();
    
    std::ofstream outfile2;
    outfile2.open("Intersection.txt");

    if(!outfile2.is_open()){
        std::cout << "Error in finding the file" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<std::string> intersection;
    intersection_vector(v1,v2,intersection);
    for (int i=0; i<intersection.size(); i++){
        outfile2 << intersection[i] << std::endl;
    }

    outfile2.close();
}