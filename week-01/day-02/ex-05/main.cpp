#include <iostream>

int main() {
    float thirteen = 13;
    float twentytwo = 22;

    float newNumber;
    std::cout <<  thirteen << " + "<< twentytwo << " = " << thirteen + twentytwo << std::endl;
    std::cout <<  thirteen << " - "<< twentytwo << " = " << thirteen - twentytwo << std::endl;
    std::cout <<  thirteen << " * "<< twentytwo << " = " << thirteen * twentytwo << std::endl;
    std::cout <<  thirteen << " / "<< twentytwo << " = " << thirteen / twentytwo << std::endl;

    std::cout <<  int(thirteen) << " / "<< int(twentytwo) << " = " << (int(thirteen)) / (int(twentytwo)) << std::endl;
    std::cout <<  int(twentytwo) << " % "<< int(thirteen) << " = " << (int(twentytwo)) % (int(thirteen)) << std::endl;


    return 0;
}