#include <iostream>
#include <cmath>

double power(double base, int exponent)
{
    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}

int main()
{
    int base, exponent;
    std::cout << "What is the base exponent?: ";
    std::cin >> base;
    std::cout << "What is the exponent?: ";
    std::cin >> exponent;
    double myPower = power(base, exponent);
    //double power = pow(base, exponent);
    std::cout << "The power is " << myPower << std::endl;
}