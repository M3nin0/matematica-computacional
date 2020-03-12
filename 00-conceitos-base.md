## Matemática computacional - Conceitos base

Este documento apresenta conceitos base para o entendimento da matéria de matemática computacional.

### Conteúdo com métodos discretos

Abaixo são listadas questões úteis para o entendimento da parte de conteúdos de métodos discretos.

* O que é um conjunto linearmente independente ?

Vetores são resultados da combinação linear de outros vetores, sendo esses projetados com as operações de soma e multiplicação.

Mas, existe um grupo de vetores um pouco diferentes, vetores que não podem ser obtidos com a operação conjunta de outros vetores, esses são os chamados de elementos linearmente independentes.

Para fixar o conceito, algumas outras definições são listadas abaixo:

> Um conjunto é dito linearmente independente se não for possível gerar um vetor deste conjunto através da combinação linear de demais conjuntos

> Vetores são linearmente independentes (LI) se nenhum dos vetores puder ser escrito como combinação linear dos demais

* O que é um espaço vetorial ?

Um espaço vetorial é um conjunto *V* equipado com as operações de soma de vetores e de multiplicação por escalares, essas que satisfazem um conjunto de propriedades.

Normalmente ao realizar a definição de um espaço vetorial, é feito um vínculo do mesmo a um determinado conjunto de valores (Por exemplo, conjunto dos números reais, complexos e etc). Tal vínculo não será feito nesta definição uma vez que, o espaço vetorial independe deste tipo de detalhe.

Entendendo o que é um espaço vetorial, voltamos para suas capacidades de soma e multiplicação, definidas anteriormente, essas devem ser feitas seguindo um conjunto de regras, como citado anteriormente, mas mais importante que isso, todas as operações realizadas, sejam elas de soma ou de multiplicação, devem levar a elementos válido do espaço vetorial *V*.

> Em resumo, é o conjunto de todos os vetores possíveis de serem gerados através da manipulação dos vetores base de tal espaço.

* O que é uma base para um espaço vetorial ?

Uma base para um dado espaço vetorial *V* é um conjunto *B* que:
- (a) gera *V* e;
- (b) é linearmente independente.

> Desta forma, as bases são os vetores citados na questão anteriores que, quando manipulados podem gerar todos os elementos do espaço vetorial

* O que é (entrada e saída) um produto escalar ? e um produto vetorial ?

| Método           | Entrada               | Saída         |
|------------------|-----------------------|---------------|
| Produto escalar  | par de vetores (A, B) | Valor escalar |
| Produto vetorial | par de vetores (A, B) | Vetor C       |

Nessa parte é interessante especificamente a interpretação geométrica de cada um dos métodos, essas são citadas abaixo:

**Interpretação geométrica do produto escalar**: 
**Interpretação geométrica do produto vetorial**: 

* O que é a normal de um vetor ?

A normal ou **módulo** de um vetor é o comprimento desse vetor, que pode ser calculado do meio da distância de seu ponto final até a origem.

**Observação**: Achei interessante manter o módulo e até mesmo grifar ele uma vez que, o módulo geometricamente não representa o valor positivo, e sim a distância daquele elemento até sua origem. 

* Como calcular o determinante de uma matriz de ordem 2 ? E para ordens maiores que 3 ?

Para realizar o cálculo da determinantes de matrizes de ordem 2 é necessário realizar a multiplicação de sua diagonal principal e sua diagonal segundária e então subtrair o resultado da diagonal secundária do resultado da diagonal primária.

Para o cálculo da determinante de matrizes 3x3 é possível aplicar o método de Sarrus.

Já para determinantes de ordem N (Considerando N >= 3), é possível utilizar o método de laplace.

> Gosto da interpretação geométrica dos determinantes. Se você imagina que toda matriz é uma transformação linear, então as determinantes são utilizadas para indicar o quanto cada uma das áreas onde a transformação linear é aplicada será distorcida/modificada.

* O que é a transposta de uma matriz ? E a inversa ?

**Transposta de uma matriz**: A operação de transposição de uma matriz é aquele em que se obtém uma nova matriz através da troca de linhas por colunas
Desta forma, uma matriz transposta é aquele que passou pela operação de transposição e deve suas linhas trocadas por colunas (Ou colunas trocas por linhas)

**Matriz inversa**: Para a explicação de tal conceito, vamos voltar a um elemento bem básico, números reais. Imagine dois números reais **i** e **j**, **i** será o inverso de **j** se e somente se, **i** * **j** = 1
Da mesma forma como visto nos valores inteiros, a matriz inversa pode ser entendida como a matriz com valores inversos a sua matriz original (Alterando os valores e mantendo as propriedades de linhas e colunas)

**Lembre-se**: Só existe uma matriz inversa, e ainda, existem matrizes que podem vir a não ter uma matriz inverta!

> Quando comecei a aprender sobre matrizes me perguntei: Por qual motivo eu quero uma matriz inversa ? A resposta é bastante simples, não existe a operação de divisão em uma matriz! Então obtendo sua inversa é possível eu realizar divisões de matrizes através de multiplicações :smile:

* Como fazer multiplicação de matrizes ?

> *Multiplicação de matrizes não é uma operação feita para ser memorizada, é para ser entendida* (3Blue1Brow)



### Conteúdo com métodos contínuos

* Quando uma função é contínua ? e diferenciável ?
* Como derivar e integrar polinômios ?
* O que é uma série de Taylor ?
