#include <math.h>
#include <iostream>
#include "trapezoidal.hpp"

// Definindo as funções que serão integradas
double f(double x)
{
    return std::pow(x, 2);
}

double f2(double x)
{
    return 1 / x;
}

int main()
{
    std::cout << "Regra do trapézio" << std::endl;
    std::cout << "Integração de f(x): TrapezoidalRule(f2(x), 1, 3) = " << NumericalIntegration::TrapezoidalRule(f2, 1, 3) << std::endl;
    std::cout << "Integração de f(x): TrapezoidalRuleRepeated(f2(x), 1.0, 3.0, 350.0) = " << NumericalIntegration::TrapezoidalRuleRepeated(f2, 1.0, 3.0, 350.0) << std::endl;

    return 0;
}
