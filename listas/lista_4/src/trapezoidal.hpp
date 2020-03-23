#ifndef _TRAPEZOIDAL_INTEGRATION_
#define _TRAPEZOIDAL_INTEGRATION_


namespace NumericalIntegration
{
    /**
     * Integra uma função utilizando o método a regra do trapézio
     * 
     * @param f Função a ser integrada
     * @param integralStart Ponto inicial de integração
     * @param integralEnd Ponto final de integração
     * @return Área integrada
     */
    double TrapezoidalRule(double (*f)(double), double integralStart, double integralEnd);
    
    /**
     * Integra uma função utilizando a regra do trapézio consecutiva
     * (Este método gera vários trapézios de mesmo tamanho para cobrir a área a ser integrada)
     * 
     * @param f Função a ser integrada
     * @param integralStart Ponto inicial de integração
     * @param integralEnd Ponto final de integração
     * @param parts Quantidade de divisões geradas (Quantidade de trapézios gerados)
     * @return Área integrada
     */
    double TrapezoidalRuleRepeated(double (*f)(double), double integralStart, double integralEnd, double parts);
    
    /**
     * Integra um conjunto de pontos utilizando a regra do trapézio consecutiva
     * 
     * @param yValues Valores de Y tabelados
     * @param integralStart Ponto inicial de integração
     * @param integralEnd Ponto final de integração
     * @param parts Quantidade de divisões geradas (Quantidade de trapézios gerados)
     * @return Área integrada
     */
    double TrapezoidalRulePoints(xt::xarray<double> yValues, double integralStart, double integralEnd, double parts);
}

#endif
