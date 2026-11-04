#include <iostream>
#include <vector>

// note: const before std::vector<double>
// and the & afterwards

double sum_vector(const std::vector<double>& vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        //now try and change a value
        //vin[i] = 9999;
        //didn't work, because vin is an unmodifiable vector
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;

    v.push_back(3);
    v.push_back(0.5);
    v.push_back(-1);

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}