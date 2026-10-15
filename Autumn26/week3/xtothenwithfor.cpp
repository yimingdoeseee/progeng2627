#include <iostream>

int main(){
    int x, n, i;
    std::cin >> x >> n;
    int temp = x;
    for(i = 1; i < n; i=i+1){
        temp = temp * x;
    }
    std::cout << temp << std::endl;
}