#include <string>
#include <algorithm>

#include "bases.hpp"
#include "decimal.hpp"
#include "alphabet.hpp"

std::string Bases::ToAnyBase(std::string value, int srcBase, int destBase)
{
    std::string valuesInDestBase;
    int valueInDecimal = ToDecimal(value, srcBase);

    while (valueInDecimal > 1)
    {
        std::string resString;
        int res = valueInDecimal % destBase;

        if (res >= 10) // Somente bases maiores que 10 produzem tal módulo
            resString = ALPHABET[res - 10];
        else 
            resString = std::to_string(res);

        valuesInDestBase.append(resString);
        valueInDecimal = valueInDecimal / destBase;
    }
    std::reverse(valuesInDestBase.begin(), valuesInDestBase.end());
    return valuesInDestBase;
}
