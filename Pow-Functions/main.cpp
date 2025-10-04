#include <iostream>
#include <cmath>

int main()
{
    int base, exponent;
    std::cout << "What is the base exponent?: ";
    std::cin >> base;
    std::cout << "What is the exponent?: ";
    std::cin >> exponent;
    double power = pow(base, exponent);
    std::cout << "The power is " << power << std::endl;
}