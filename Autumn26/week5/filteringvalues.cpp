#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    int n, add, max;
    std::cout << "please enter the number of elements to input" << std::endl;
    std::cin >> n;
    std::cout << "please enter your elements now" << std::endl;
    for (int i = 0; i < n; i++){
        std::cin >> add;
        v.push_back(add);
    }
    std::cout << "please enter your maximum bound, i will print all numbers in your vector which are less than this number" << std::endl;
    std::cin >> max;
    std::cout << "elements:" << std::endl;
    for (int i = 0; i < n; i++){
        if (v[i] < max){
            std::cout << v[i] << std::endl;
        }
    }
}