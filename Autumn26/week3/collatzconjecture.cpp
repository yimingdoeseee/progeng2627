#include <iostream>

int main(){
    int n, curmax, i = 0;
    std::cin >> n;
    curmax = n;
    while (n != 1){
        i++;
        if(n > curmax){
            curmax = n;
        }
        if (n%2==1){
            n=3*n+1;
        }
        else{
            n=n/2;
        }
        std::cout << n << " ";
    }
    std::cout << std::endl;
    std::cout << "Number of steps: " << i << std::endl;
    std::cout << "Maximum in sequence: " << curmax << std::endl;
}
