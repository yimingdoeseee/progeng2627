#include <iostream>
#include <cmath>
int sumpowers(int base, int exp){
    int accsum = 0;
    for(int i = 1; i <= exp ; i++){
        accsum += int(std::pow(base, i));
    }
    return accsum;
}

int main(){
    int baseinput, expinput;
    std::cout << "Please enter a base and exponent in the form b e:" << std::endl;
    std::cin >> baseinput >> expinput;
    std::cout << "Your sum of powers from i = 1 to i = " << expinput << " of " << baseinput << "^i: "<< sumpowers(baseinput, expinput) << std::endl;
}