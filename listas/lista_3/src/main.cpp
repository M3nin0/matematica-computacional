#include <iostream>

#include "xtensor/xarray.hpp"
#include "xtensor/xview.hpp"

#include "LagrangeInterpolator.hpp"

int main()
{
    xt::xarray<double> x({1, 3, 5, 7});
    xt::xarray<double> y({2, 4, 3, 4});

    interp::LagrangeInterpolator l(x, y);
    l.fit();

    xt::xarray<double> result = l.interp(xt::xarray<double>({7}));
    std::cout << result.data()[0] << std::endl;

    return 0;
}
