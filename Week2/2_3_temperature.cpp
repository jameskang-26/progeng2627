#include <iostream>
#include <string>

int main () {
    double temp_in, temp_out;
    std::string unit_in, unit_out;

    // F = C x 1.8 +32
    // C = (F -32) x 5/9

    std::cin >> temp_in >> unit_in;

    bool valid_unit = true;

    if((unit_in == "c") || (unit_in == "C")) {
        unit_out = "F";
        temp_out = (temp_in * 1.8) + 32;

    }
    else if ((unit_in == "f") || (unit_in == "F")) {
        unit_out = "C";
        temp_out = (temp_in - 32) * (5.0/9.0);
    }
    else {
        valid_unit = false;

    }

    if(valid_unit) {
        std::cout << temp_out << " " << unit_out << std::endl;

    }
    else {
        std::cout << "error, unit not recognised" << std::endl;

    }


}