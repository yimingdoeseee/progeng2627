#include <iostream>

int main(){
    int n;

    std::cin >> n;

    while((n<11)&&(n>-11)){
        std::cout << n << std::endl;
        std::cin >> n;
    }
}