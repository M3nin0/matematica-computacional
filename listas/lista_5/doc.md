## Lista 5 - Soluções numéricas de Equações Diferenciais

Quinta lista de exercícios da matéria de matemática computacional (CAP-239-4), do curso de pós-graduação em Computação Aplicada do Instituto Nacional de Pesquisas Espaciais

Docentes:
- Dr. Leonardo B. L. Santos
- Dr. Reinaldo Rosa

Discente:
- Felipe Menino Carlos

### Exercícios

**1) Considere o problema do valor inicial $y(1) = 1$ da equação diferencial $y' = f(x, y) = 2x + 3$**

Quem é $y(2)$ ? 

Responda através dos seguintes métodos:

- Analítico
- Método de Euler (h = 1 e h = 0.5)
- Método de Runge-Kutta-4 (h = 1)

Cada um dos passos listados acima foi resolvido "na mão" e apresentados nas Figuras abaixo.

- Analítico

<div align="center">
    <img src="figuras/exe-1-1.jpg">
</div>

- Método de Euler (h = 1 e h = 0.5)

<div align="center">
    <img src="figuras/exe-1-2.jpg">
</div>

- Método de Runge-Kutta-4 (h = 1)

<div align="center">
    <img src="figuras/exe-1-3.jpg">
</div>

**Validação dos resultados**: Para a validação de cada um dos resultados apresentados acima, foi realizado a [implementação dos métodos de Euler e Runge-Kutta](https://github.com/M3nin0/matematica-computacional/blob/master/listas/lista_5/code.pdf) com a linguagem de programação [Octave](https://www.gnu.org/software/octave/). Os resultados obtidos com as funções implementadas são apresentados abaixo:

Ao aplicar o método de Euler através da função implementada, é possível perceber que o valor correspondente a y(2) é exatamente o mesmo encontrado na solução apresentada anteriormente (Para h = .5)

```matlab
fnc = @(x, y) 2*x + 3;

[x, y] = eulerSolverEDO(1, 2, .5, 1, fnc);

% x = [1.0000 1.5000 2.0000]
% y = [1.0000 3.5000 6.5000]
```

Caso o valor de h seja aumentado para h = 1, teremos como resultado

```matlab
fnc = @(x, y) 2*x + 3;

[x, y] = eulerSolverEDO(1, 2, 1, 1, fnc);

% x = [1 2]
% y = [1 6]
```

Fazendo o mesmo processo com o método de Runge-Kutta (h = 1), temos o também o mesmo resultado encontrado anteriormente.

```matlab
[x, y] = rungeKuttaSolverEDO(1, 2, 1, 1, fnc);

% x = [1 2]
% y = [1 7]
```

**Testando o método de Euler com mais pontos**: Ao realizar o exercício proposto, uma coisa ficou clara, o método de Runge-Kutta-4 apresentou o mesmo resultado que a forma analítica, o que indica uma melhor aproximação da função criada.

Como uma forma de tentar fazer com que o método de Euler também chegue no mesmo valor, testes com a variação crescente da quantidade de pontos utilizados no método foi feito.

Para o exercício, os valores de h = 0.5 e 1 já haviam sido testados, então, alguns valores menores foram utilizados, a tabela abaixo apresenta os resultados

> Valores menores de h no mesmo intervalo indicam que haverão mais valores para preencher tal intervalo.

|    h   | Resultado |
|:------:|:---------:|
|   .3   |   6.0400  |
|   .1   |    6.9    |
| .01    | 6.9900    |
| .001   | 6.9990    |
| .0001  | 6.9999    |
| .00001 | 7         |

Veja que com uma quantidade muito pequena de h o valor 7, gerado com o método analítico e com o Runge-Kutta pode ser alcançado. Tudo bem, então a aproximação do método de Euler foi tão boa quanto as demais, porém, após a geração dos resultados, ficou evidente um problema, o custo que desta aproximação.

Enquanto o valor de h foi diminuindo, a quantidade de elementos calculados no método de Euler foi aumentando. O gráfico abaixo apresenta a maneira como a quantidade de elementos foi crescendo quando o h foi diminuíndo.

<div align="center">
    <img src="figuras/qtd_elementos_euler.png">
</div>

Com isso, podemos voltar a uma discussão já levantada pelo professor Leonardo em uma das aulas, `O que é ter qualidade nos resultados ?`, claro, este é um caso pequeno, com uma função simples e um método que computacionalmente pode não ser tão custoso, mas, considerar certos pontos pode ajudar na escolha no método e na rápida obtenção dos resultados.
