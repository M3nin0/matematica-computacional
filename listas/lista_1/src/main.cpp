#include <iostream>
#include "bases.hpp"

int main()
{    
    std::cout << 1010 << " (bin to dec) " << Bases::ToAnyBase("1010", 2, 10) << std::endl;
    std::cout << 252 << " (dec to bin) " << Bases::ToAnyBase("252", 10, 2) << std::endl;
    std::cout << 2526 << " (dec to hex) " << Bases::ToAnyBase("2526", 10, 16) << std::endl;
    std::cout << "22FA" << " (hex to oct) " << Bases::ToAnyBase("22FA", 16, 8) << std::endl;

    return 0;
}
