#ifndef _RECTANGLE_INTEGRATION_
#define _RECTANGLE_INTEGRATION_

namespace NumericalIntegration
{
    double RectangleRuleFunction(double (*f)(double), double integralStart, double integralEnd, double parts);
    double RectangleRuleTable(const xt::xarray<double>& yValues, double integralStart, double integralEnd, double parts);
}

#endif
