#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(9);
    // this therefore means that the vector is
    // v = |2|3|9|

    std::cout << v[0] * ( v[1] + v[2]) << std::endl;
}