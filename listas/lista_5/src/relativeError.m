function re = relativeError(y, ye)
  %RELATIVEERROR Fun��o para calcular o erro relativo
  %   Par�metros
  %       y (array) Valor real
  %       ye (array) Valor aproximado
  %   Retorno
  %       re (array) Erro relativo
  re = abs(y .- ye) ./ abs(y);
endfunction
