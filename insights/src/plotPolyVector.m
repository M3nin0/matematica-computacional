function plotPolyVector(xoriginal, yoriginal, polyvector, interval)
  figure();
  hold on
  plot(interval, polyvector, 'linewidth', 8);
  plot(xoriginal, yoriginal, 'ro', 'markersize', 14, 'MarkerFaceColor', 'red');
endfunction
