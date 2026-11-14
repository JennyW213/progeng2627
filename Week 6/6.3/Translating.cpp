#include <iostream>
#include <fstream>
#include <vector>


void translate (const std::vector<std::string>& v1, const std::vector<std::string>& v2, std::vector<std::string>& vout){
    int j=0;
    
    for (int i=0; i < v1.size(); i++){
            if ((j + 1 <= v2.size()) && (v1[i]==v2[j])){
                vout.push_back(v2[j+1]);
                j = j + 2;
            }
            else{
                vout.push_back(v1[i]);
            }
        }
    }

int main(){
    std::vector<std::string> v1, v2;
    std::vector<std::string> out;
    
    std::string inputfile1;
    std::ifstream infile1;
    std::cout << "Enter the name of file 1: " << std::endl;
    std::cin >> inputfile1;

    infile1.open(inputfile1);
    std::string tmp1;
    while (infile1 >> tmp1){
        v1.push_back(tmp1);
    }

    infile1.close();

    std::string inputfile2;
    std::ifstream infile2;
    std::cout << "Enter the name of file 2, the words you want: " << std::endl;
    std::cin >> inputfile2;

    infile2.open(inputfile2);
    
    std::string tmp2;
    while (infile2 >> tmp2){
        v2.push_back(tmp2);
    }
    
    infile2.close();

    std::string outputfile;
    std::ofstream outfile;
    std::cout << "Enter the name of output: " << std::endl;
    std::cin >> outputfile;

    outfile.open(outputfile);

    translate(v1, v2, out);
    for (int i=0; i<out.size(); i++){
        outfile << out[i] << "\t";
    }
    outfile.close();
    
}