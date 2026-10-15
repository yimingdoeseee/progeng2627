#include <iostream>

int main(){

    double x, result;
    int n, counter = 0;

    std::cin >> x >> n;

    while(counter < n){
        result = result + x;
        counter = counter + 1;
    }

    std::cout << x << "*" << n <<  " = " << result << std::endl;

}