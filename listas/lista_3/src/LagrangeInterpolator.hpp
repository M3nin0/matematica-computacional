#ifndef LAGRANGE_INTERPOLATOR_HEADER
#define LAGRANGE_INTERPOLATOR_HEADER

namespace interp
{
    class LagrangeInterpolator
    {
    private:
        xt::xarray<double> arrX, arrY;
        std::vector<xt::xarray<double>> setOfLowerElements, setOfUpperElements;
    public:
        LagrangeInterpolator(const xt::xarray<double> arrX, const xt::xarray<double> arrY);
        
        void fit();
        xt::xarray<double> interp(const xt::xarray<double> arr);  
    };
}

#endif
