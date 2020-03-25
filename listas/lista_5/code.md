## Implementação dos métodos de solução numérica de Equações Diferenciais Ordinárias

Este documento apresenta a implementação dos métodos numéricos de Euler e Runge-Kutta (4° Ordem) para a solução de Equações Diferenciais Ordinárias, criados para a lista de exercícios 5 da disciplina de matemática computacional (CAP-239-4) do Instituto Nacional de Pesquisas Espaciais. A implementação foi feita utilizando a linguagem de programação [Octave](https://www.gnu.org/software/octave/), os códigos implementados e conceitos utilizados são apresentados nas seções abaixo.

### Método de Euler

A implementação do método de Euler, assume uma abordagem iterativa inerente ao próprio método. Essencialmente, o código recebe todas as informações do problema, como o limite superior e inferior de $x$, o valor de $h$, o ponto inicial e a função considerada.

Desta forma, o campo amostral de $x$ é gerado, considerando os valores mínimos, máximos e $h$ recebidos, e para cada um desses valores o método de Euler, apresentado abaixo, é aplicado.

$$
y_{k+1}=y_k+h\cdot f\left(x_k,\:y_k\right)
$$

O código abaixo apresenta um exemplo de utilização do código do método.

```matlab
exercise12PVI = @(x, y) -y + x + 2;

[x, y] = eulerSolverEDO(0, .3, .1, 2, exercise12PVI);

% x =  0.00000    0.10000    0.20000    0.30000
% y = 2.0000   2.0000   2.0100   2.0290
```

A saída do código é feita pelos vetores $x$ e $y$, como apresentado acima, esses apresentam, para cada valor de $x$, um valor de $y$ gerado.

<div style="page-break-after: always;"></div>

### Método de Runge-Kutta de 4° Ordem

De forma análoga aos passos realizados na implementação do método de Euler, o método de Runge-Kutta de 4° Ordem segue exatamente os mesmos passos, com a diferença que, no momento da geração dos pontos, o método, apresentado abaixo, é aplicado.

$$
y_{n+1}=y_n+\frac{1}{6}\cdot \left(k_1+2\cdot k_2+2\cdot k_3+k_4\right)
$$

$$
k_1=h\cdot f\left(x_n,\:y_n\right)
$$

$$
k_2=h\cdot f\left(x_n+\frac{h}{2},\:y_n+\frac{k_1}{2}\right)
$$

$$
k_3=h\cdot f\left(x_n+\frac{h}{2},\:y_n+\frac{k_2}{2}\right)
$$

$$
k_4=h\cdot f\left(x_n+h,\:y_n+k_3\right)
$$

Abaixo é apresentado um exemplo de uso do código, para a solução de um problema apresentado durante as aulas.

```matlab
exercise12PVI = @(x, y) -y + x + 2;

[x, y] = rungeKuttaSolverEDO(0, .3, .1, 2, exercise12PVI);

% x = 0.00000    0.10000    0.20000    0.30000
% y = 2.0000   2.0048   2.0187   2.0408
```

Análogo ao código do método de Euler, a saída é feita pelos vetores $x$ e $y$, sendo que, para cada valor em $x$, há um valor gerado em $y$. 

> Sobre o Octave: A implementação foi feita utilizando o Octave apenas por curiosidade
