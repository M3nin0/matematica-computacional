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

        /**
         * Construtor da classe
         * 
         * @param arrX Dados independentes do conjunto de dados
         * @param arrY Dados dependentes de arrX
         */
        LagrangeInterpolator(const xt::xarray<double>& arrX, const xt::xarray<double>& arrY);
        
        /**
         * Ajusta a função de interpolação pelo método de Lagrange. Implementação
         * inspirada na api do scikit-learn
         */
        void fit();

        /**
        * Utiliza a função criada no método fit para realizar a interpolação do dado x inserido
        * 
        * @param arr Dado(s) independentes que serão interpolados
        */
        const xt::xarray<double> interp(const xt::xarray<double>& arr) const;
    };
}

#endif
