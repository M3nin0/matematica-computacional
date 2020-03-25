exercise12PVI = @(x, y) -y + x + 2;

[x, y] = eulerSolverEDO(0, .3, .1, 2, exercise12PVI);

disp('Euler Solver');
disp(x);
disp(y);

[x, y] = rungeKuttaSolverEDO(0, .3, .1, 2, exercise12PVI);

disp('Runge-Kutta(4) Solver');
disp(x);
disp(y);
