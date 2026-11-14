#include <iostream>
#include <string>
#include <vector>

#include <utility>

std::string char_to_string(char c){
    std::string s;
    s.push_back(c);
    return s;
}

bool is_palindrome(std::string s){
    std::string clean_s ;
    for (int n=0; n<s.size(); n++){
        if(!std::isspace(s[n])){
            clean_s.push_back(s[n]);
        }

    }

    int i=0, j=clean_s.size()-1;
    
    while (i<(clean_s.size()/2)){
        if (clean_s[i]==clean_s[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;

}

int main(){
    std::vector<std::pair<std::string, bool>> test_cases =
    {
        {"a man a plan a canal panama", true},
        {"a man plan a canal panama", false},
        {"a toyota", true},
        {"never odd or even", true},
        {"never even or odd", false}
    };
    
    for (int i=0; i < test_cases.size(); i++){

        bool test = is_palindrome(test_cases[i].first);

        if(test == test_cases[i].second){
            std::cout << "passed" << std::endl;
        }
        else{
            std::cout << "Does not work" << std::endl;
            std::cout << test_cases[i].first << std::endl;
            std::cout << "Expected: " << test_cases[i].second << std::endl;
            std::cout << "got: " << test << std::endl;
        }
    }
}