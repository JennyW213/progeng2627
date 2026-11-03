#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    int n, s, num, count=0;

    std::cout << "Please enter n: " << std::endl;
    std::cin >> n;

    for (int i=0; i<n; i++){
        std::cout << "Please enter a number: " << std::endl;
        std::cin >> num;
        v.push_back(num);
    }

    std::cout << "Please enter s: " << std::endl;
    std::cin >> s;

    for (int j=0; j<n; j++){
        if (v[j]==s){
            count = count + 1;
        } 
    }

    std::cout << "There are " << count << " occurrences of " << s << std::endl;
}