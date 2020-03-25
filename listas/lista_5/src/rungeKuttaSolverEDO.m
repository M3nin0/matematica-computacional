function [x, y] = rungeKuttaSolverEDO(x0, xn, h, y, fncEdo)
  %RUNGEKUTTASOLVEREDO Função para aproximação de equações diferenciais 
  %utilizando o método de Runge-Kutta (4° ordem)
  %   Parâmetros
  %       x0 (double) Valor inicial de x (x0 <= x <= xn)
  %       xn (double) Valor final de x (x0 <= x <= xn)
  %       h  (double) Tamanho do intervalo entre o x0 e xn
  %       fncEdo (function) Função a ser aproximada
  %   Retorno
  %       x (array) Valores gerados de X
  %       y (array) Valores aproximados de Y
  
    x = x0:h:xn;
    n = length(x);

    for i=2:n  
      xn = x(i - 1);
      yn = y(i - 1);
      
      y(i) = yn + (1/6) * calcRungeKuttaK(xn, yn, h, fncEdo);
    end
endfunction

function k = calcRungeKuttaK(xn, yn, h, fncEdo)
  k(1) = h * fncEdo(xn, yn);
  k(2) = h * fncEdo(xn + h/2, yn + k(1) / 2);
  k(3) = h * fncEdo(xn + h/2, yn + k(2) / 2);
  k(4) = h * fncEdo(xn + h, yn + k(3));
  
  k(2) = 2 * k(2);
  k(3) = 2 * k(3);
  k = sum(k);
end
