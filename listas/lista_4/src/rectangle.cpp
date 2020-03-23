#include "xtensor/xarray.hpp"

#include "rectangle.hpp"

double NumericalIntegration::RectangleRuleFunction(double (*f)(double), double integralStart, 
                              double integralEnd, double parts)
{
    double result = 0;
    double h = (integralEnd - integralStart) / parts;
    
    for(double i = integralStart; i < integralEnd; i += h)
    {        
        result += f((i + (i+h))/2.0) * h;
    }
    return result;
}

double NumericalIntegration::RectangleRuleTable(const xt::xarray<double>& yValues, double integralStart, double integralEnd, double parts)
{
    double result = 0;    
    double step = (integralEnd - integralStart) / parts;
    
    for(int dataIndex = 0; dataIndex < yValues.shape()[1]; ++dataIndex)
    {                
        result += yValues(dataIndex) * step;
    }
    return result;
}
