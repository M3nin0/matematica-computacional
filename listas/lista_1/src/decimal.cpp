#include <math.h>
#include <string>
#include <cstdlib>

#include "decimal.hpp"

int Bases::ToDecimal(std::string value, int srcBase)
{
    int decimalValue = 0;
    int stringSize = value.size() - 1;

    for(char c: value)
    {
        int numericSymbol = 0;
        if (!std::isdigit(c))
            numericSymbol = std::strtol(&c, NULL, srcBase);
        else
            numericSymbol = std::stoi(&c);
        decimalValue += numericSymbol * std::pow(srcBase, stringSize--);
    }
    return decimalValue;
}
