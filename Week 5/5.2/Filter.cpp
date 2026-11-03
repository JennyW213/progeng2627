#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for (int i=0; i<vin.size(); i++){
        if (vin[i]<t){
            vout.push_back(vin[i]);
        }
    }
}

int main(){
    std::vector<double> v, vin;
    int t;
    vin = {1, 4, 8, 9, 15, 18, 20};
    std::cin >> t;
    filter_v(vin, t, v);

    std::cout << "All values in vin less than " << t << " :" << std::endl;
    for (int i=0; i<v.size(); i++){
        std::cout << v[i] << std::endl;
    }
}