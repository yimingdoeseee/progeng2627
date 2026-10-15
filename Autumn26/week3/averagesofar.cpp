#include <iostream>

int main(){
    double n, i = 0, sum = 0, avg = 0;
    bool stop = false;

    while(stop == false){
        std::cout << "enter a number: " << std::endl;
        std::cin >> n;
        i = i + 1;
        if (n == 0){
            stop = true;
        }
        else{
            sum = sum + n;
            avg = sum / i;
            std::cout << "the average so far is: " << avg << std::endl;
        }
    }
}