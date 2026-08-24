#include <iostream>
#include "Calculator.h"

int main() {
    Calculator calc;
    std::cout << "10 + 5 = " << calc.add(10, 5) << std::endl;
    std::cout << "10 - 5 = " << calc.subtract(10, 5) << std::endl;
    std::cout << "Branch Changed Finished!!" << std::endl;
    return 0;
}