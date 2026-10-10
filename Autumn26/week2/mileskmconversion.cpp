#include <iostream>
#include <string>

int main(){

    double length_in, length_out;
    std::string unit_in, unit_out;

    const double mile_to_km = 1.609;

    // stage 1: input

    std::cin >> length_in >> unit_in;

    bool valid_unit = true;
    // we assume the user will input a valid unit

    // stage 2: data processing

    if(unit_in == "km"){
        unit_out = "mile";
        length_out = length_in / mile_to_km;

    }
    else if(unit_in == "mile"){
        unit_out = "km";
        length_out = length_in * mile_to_km;
    }
    else{
        valid_unit = false;
        // if the user inputs an invalid unit name
        // we update this variable
    }

    // stage 3: output 

    if(valid_unit){
        std::cout << length_out << " " << unit_out << std::endl;
    }
    else{
        std::cout << "error, unit not recognised" << std::endl;
    }

}