#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <cmath>
#include "arby.h"

int main() {

    Arby* theArbys = new Arby("The Arby's");

    std::cout << "The name of the restaurant is: " << theArbys->GetName() << std::endl;

    delete theArbys;
    
    std::cout << "Sample Program Complete" << std::endl;
    return 0;
}