// improved version: stops as soon as a factor is found,
// and never tests candidates larger than the square root of n
#include <iostream>

int main(){
    int n;
    bool found_factor = false;
    // initially we haven't found any factors...

    std::cout << "please enter an integer greater than 1" << std::endl;
    // we assume that the user enters an integer greater than 1
    std::cin >> n;

    // cf like candidate factor
    // (begins at 2, smallest candidate factor)
    //
    // - "cf <= n / cf" is the same as "cf * cf <= n" (cf <= sqrt(n)),
    //   but it cannot overflow for large n
    // - "!found_factor" ends the loop as soon as a factor is found
    for(int cf = 2; cf <= n / cf && !found_factor; cf++){

        if( (n % cf) == 0){ // n can be divided by cf...

            found_factor = true;
            //...it means we have found a factor!
        }

    }

    if(found_factor){
        std::cout << "the number is not prime" << std::endl;
    }
    else{
        std::cout << "the number is prime" << std::endl;
    }
}