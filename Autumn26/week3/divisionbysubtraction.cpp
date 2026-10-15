#include <iostream>

int main(){
    int a = 10, b = 3, temp;
    temp = a;
    std::cout << "we want to perform the integer divison of " << a << "  by " << 3 << std::endl;

    while(temp>b){
        std::cout << a << " is greater than " << b << " so we subtract " << b << " from " << a << " (first subtraction)" << std::endl;
        temp = temp - b;
        std::cout << "we get " << temp << std::endl;
    }
    std::cout << temp << " is not greater than " << b << " so we terminate the loop " << std::endl;
    std::cout << "the quotient is the number of subtractions (" << b << ")" << std::endl;
    std::cout << "the remainder is the number we have left at the end (" << temp << ")" << std::endl;
}