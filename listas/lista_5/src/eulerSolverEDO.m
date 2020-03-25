function [x, y] = eulerSolverEDO(x0, xn, h, y, fncEdo)
  %EULERSOLVEREDO Função para aproximação de equações diferenciais utilizando o 
  %método de Euler
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
    x_i = x(i - 1);
    y_i = y(i - 1);
    
    y(i) = y(i - 1) + (h * fncEdo(x_i, y_i));  
  end
endfunction
