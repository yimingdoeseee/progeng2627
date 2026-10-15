#include <iostream>

int main(){
    int n, sum = 0;
    bool stop = false;

    while(stop == false){
        std::cout << "enter a number: " << std::endl;
        std::cin >> n;
        if (n == 0){
            stop = true;
        }
        else{
            sum = sum + n;
            std::cout << "the sum so far is: " << sum << std::endl;
        }
    }
}