function plotPoly(xoriginal, yoriginal, params, interval)
  figure();
  hold on
  plot(interval, polyval(params, interval), 'linewidth', 8);
  plot(xoriginal, yoriginal, 'ro', 'markersize', 14, 'MarkerFaceColor', 'red');
endfunction
