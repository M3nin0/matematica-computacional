## Matemática computacional - Equações diferenciais ordinárias (EDO)

Este documento apresenta anotações para a matéria de EDO do curso de Matemática computacional 1 (CAP-239-4), do curso de pós-graduação em Computação Aplicada do Instituto Nacional de Pesquisas Espaciais (INPE)

### Noções de Equações Diferenciais Ordinárias (EDO)

Uma EDO é uma equação onde a incógnita é uma função de uma variável e ela (a função) está **envolvida em derivadas**:

Sobre notação:
- $y = y(t) \ ou \ y(x)$
- $y' = D_x[y] \ ou \ D_t[y]$
- $y'' = D_{xx}[y] \ ou \ D_{tt}[y]$

**Ordem de uma equação diferencial**: Valor da maior derivada presente na equação. Por exemplo, na equação $y' + 2 = 2y$, temos que é uma equação diferencial de primeira ordem (A maior derivada é a derivada primeira). Já para o caso de $y''' + 5x = 2yx$ temos que é de ordem 3.

**Exemplos**

A solução dos exemplos apresentados abaixo estão relacionados a encontrar uma função que faça a igualdade se tornar verdadeira

a) $y' + y = 0$
b) $y'' + x' = 12y$

### Equações diferenciais de 1° ordem de variáveis separáveis

Equações diferenciais de 1° ordem de variáveis separáveis é um tipo de EDO que pode ser escrita na forma:

$$
\frac{dy}{dx} = \frac{F(x)}{G(y)} <=> G(x)dy = F(x)dx => \int G(y) dy = \int F(x)dx
$$

Possui os seguintes tipos de solução:
- **Solução implícita**: Se a solução é dado implicitamente por uma equação na forma $f(x, y) = c$
- **Solução explícita**: Se a solução é dada explicitamente por $y = f(x) + c$

<!-- ### Bibliografia

As anotações aqui registradas foram retiradas dos seguintes links:
- https://www.youtube.com/watch?v=f1j_moUiYAg -->
