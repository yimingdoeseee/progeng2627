#include <iostream>

int main(){
    double weight, height, bmi;
    std::cout << "enter your weight in kg: " << std::endl;
    std::cin >> weight;
    std::cout << "enter your height in m: " << std::endl;
    std::cin >> height;
    bmi = weight / (height * height);
    std::cout << "your bmi is " << bmi << std::endl;
}
//hopefully i will learn how to output to 1dp soon