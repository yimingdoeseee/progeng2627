#include <iostream>

int main(){
    double x1, x2, perimeter, area;
    std::cout << "enter the first side length of the rectangle: " << std::endl;
    std::cin >> x1;
    std::cout << "enter the second side length of the rectangle: " << std::endl;
    std::cin >> x2;
    perimeter = x1 + x2;
    area = x1 * x2;
    std::cout << "perimeter of rectangle: " << perimeter << std::endl;
    std::cout << "area of rectangle: " << area << std::endl;

}