#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){
    for (int i = 0; i < vin.size(); i++){
        if (vin[i] == n){
            return i;
        }
    }
    return -1;
}

int main(){
    std::vector<int> v;
    v = {1,4,5,2,0,19,67};
    std::cout << search_vector(67, v) << std::endl;
}