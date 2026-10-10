#include <iostream>

int main(){
    double pounds, euros;
    std::cout << "enter the amount of money in GBP: " << std::endl;
    std::cin >> pounds;
    euros = pounds * 1.18;
    std::cout << "that is equivalent to " << euros << " euros" << std::endl;
}