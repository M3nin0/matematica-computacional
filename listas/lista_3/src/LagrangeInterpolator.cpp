#include <vector>
#include "xtensor/xarray.hpp"
#include "xtensor/xio.hpp"
#include "xtensor/xview.hpp"
#include "xtensor/xadapt.hpp"

#include "LagrangeInterpolator.hpp"

interp::LagrangeInterpolator::LagrangeInterpolator(const xt::xarray<double>& arrX, const xt::xarray<double>& arrY)
{
    this->arrX = arrX;
    this->arrY = arrY;
}

void interp::LagrangeInterpolator::fit()
{    
    const std::vector<std::size_t> shape = {1, arrX.size() - 1};
    
    for(int i = 0; i < arrX.size(); ++i)
    {
        std::vector<double> lowerElements;
        xt::xarray<double> upperElement = xt::view(arrX, xt::drop(i), xt::all());
        
        for(int j = 0; j < arrX.size(); ++j) 
        {
            if (i != j)
            {
                xt::xarray<double> lowerElement = xt::view(arrX, xt::keep(i), xt::all()) - arrX(j);
                lowerElements.push_back(lowerElement.data()[0]);
            }
        }
        
        setOfUpperElements.push_back(upperElement);
        setOfLowerElements.push_back(xt::adapt(lowerElements, shape));
    }
}

const xt::xarray<double> interp::LagrangeInterpolator::interp(const xt::xarray<double>& arr) const
{
    std::vector<double> prodResults;
    const std::vector<std::size_t> shape = {1, arr.size()};
    
    for(int i = 0; i < arr.size(); ++i)
    {
        double tmpResult = 0;
        
        for(int j = 0; j < this->arrX.size(); ++j)
        {
            xt::xarray<double> upperElements = this->setOfUpperElements[j];
            xt::xarray<double> lowerElements = this->setOfLowerElements[j];
                                 
            xt::xarray<double> prodResult = (xt::prod(arr(i) - upperElements) / xt::prod(lowerElements)) * this->arrY(j);            
            tmpResult += prodResult.data()[0];
        }
        prodResults.push_back(tmpResult);
    }
    return xt::adapt(prodResults, shape);
}
