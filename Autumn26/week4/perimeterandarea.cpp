#include <iostream>

void rectangle(int& side1, int& side2, int& perimeter, int& area){
    perimeter = 2 * (side1 + side2);
    area = side1 * side2;
}
int main(){
    int a, b, perimeter, area;
    std::cout << "Enter the two side lengths of the rectangle" << std::endl;
    std::cin >> a >> b;
    rectangle(a, b, perimeter, area);
    std::cout << perimeter << " " << area;
}