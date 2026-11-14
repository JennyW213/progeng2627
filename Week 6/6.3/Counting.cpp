#include <iostream>
#include <fstream>
#include <vector>

void search (const std::vector<std::string>& v1, const std::vector<std::string>& v2, int num, std::vector<int>& count){
    for (int j=0; j<v2.size(); j++){
        num = 0;
        for (int i=0; i<v1.size(); i++){
            if (v2[j] == v1[i]){
                num = num + 1;
            }
        }
        count.push_back(num);
    }
}

int main(){
    std::vector<std::string> v1, v2;
    std::vector<int> count;
    int num = 0;
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
    search(v1, v2, num, count);
    for (int i=0; i<v2.size(); i++)
        outfile << v2[i] << ":" << count[i] << std::endl;
    outfile.close();
}