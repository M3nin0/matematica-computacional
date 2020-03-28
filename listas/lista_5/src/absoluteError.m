function ae = absoluteError(y, ye)
  %ABSOLUTEERROR Função para calcular o erro absoluto
  %   Parâmetros
  %       y (array) Valor real
  %       ye (array) Valor aproximado
  %   Retorno
  %       ae (array) Erro absoluto
  ae = abs(y .- ye);
endfunction
