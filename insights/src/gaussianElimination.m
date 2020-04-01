function arr = gaussianElimination(arr)
  for index=1:1:size(arr, 1) - 1
    pivot = arr(index, index);
    pivotLine = arr(index, :);
    
    for actualLineIndex=index+1:1:size(arr, 1)
      actualLine = arr(actualLineIndex, :);
      actualLineElement = arr(actualLineIndex, index);
      
      lineMP = actualLineElement / pivot;
      arr(actualLineIndex, :) = actualLine - (pivotLine * lineMP);
    endfor
  endfor
endfunction
