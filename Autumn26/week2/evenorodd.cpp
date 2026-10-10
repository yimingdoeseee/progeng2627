#include <iostream>

int main(){
    int n, rem;

    std::cout << "please enter a number" << std::endl;
    std::cin >> n;

    rem = n % 2;

    if(rem == 0){
        // if the remainder is 0...
        std::cout << "the number is even" << std::endl;
    }
    else{
        // otherwise...
        std::cout << "the number is odd" << std::endl;
    }
}