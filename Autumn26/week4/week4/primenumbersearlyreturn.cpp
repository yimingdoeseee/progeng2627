#include <iostream>

int prime(int n){
    for (int i = n - 1; i > 1; i = i - 1){
        if ((n % i) == 0){
            return i;
        }
    }
    return 0;
}
int main(){
    int input;
    std::cout << "Enter a number to check if prime. If it isn't prime, first factor other than itself will be returned. Otherwise, 0 is returned." << std::endl;
    std::cin >> input;
    std::cout << prime(input);
}