function pre = relativeErrorPercentage(y, ye)
  %RELATIVEERRORPERCENTAGE Função para calcular o erro relativo (Em porcentagem)
  %   Parâmetros
  %       y (array) Valor real
  %       ye (array) Valor aproximado
  %   Retorno
  %       pre (array) Erro relativo (Em porcentagem)
  pre = (abs(y .- ye) ./ y) .* 100;
endfunction
