function re = relativeError(y, ye)
  %RELATIVEERROR Função para calcular o erro relativo
  %   Parâmetros
  %       y (array) Valor real
  %       ye (array) Valor aproximado
  %   Retorno
  %       re (array) Erro relativo
  re = abs(y .- ye) ./ abs(y);
endfunction
