function ae = absoluteError(y, ye)
  %ABSOLUTEERROR Fun��o para calcular o erro absoluto
  %   Par�metros
  %       y (array) Valor real
  %       ye (array) Valor aproximado
  %   Retorno
  %       ae (array) Erro absoluto
  ae = abs(y .- ye);
endfunction
