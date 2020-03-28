## Questões extras

Lista de exercícios extras da matéria de matemática computacional (CAP-239-4), do curso de pós-graduação em Computação Aplicada do Instituto Nacional de Pesquisas Espaciais

Docentes:
- Dr. Leonardo B. L. Santos
- Dr. Reinaldo Rosa

Discente:
- Felipe Menino Carlos

**Sobre este documento**:  As seções criadas abaixo representam o momento da disciplina em que cada questão extra foi passada

#### Lista 1 - Conversão de base numérica

**1) Qual a vantagem de utilizar bases numéricas maiores ? e menores ?**

Ao tratarmos sobre bases numéricas computacionais, estamos tratando especificamente de formas de uma **representação**, neste caso, a dos números dentro de um computador. Desta forma, como toda forma de representação, apresenta ganhos e perdas.

Além disto, sobre as bases numéricas, é [interessante que as mesmas possam](https://math.stackexchange.com/questions/258987/what-is-the-best-base-to-use):
- 1° Minimizar o número de digitos necessários;
- 2° Minimizar o tamanho da representação de cada dígito.

Para o segundo tópico citado acima, é interessante lembrar sobre como as bases numéricas tratam a quantidade de dígitos, sendo possível para este contexto, parafrasear o livro [Computational Matter (Natural Computing Series)](https://isbnsearch.org/isbn/9783319658247)

> An important feature of a based representation is that the length of the represented number (number of digits needed) is logarithmic in the size of the value of the number. 

Com estas considerações feitas, vamos as questões iniciais. 

Tratando das bases menores primeiro, por normalmente serem criadas com uma baixa quantidade de símbolos (Por exemplo, a binária com apenas o 0 e 1) são bastante custos em termos de espaço, sendo necessários uma composição diversos de seus elementos para representar apenas um número. Porém, pelo mesmo fato, de ter poucos dígitos, tem sua manipulação simples e com erro associado baixo (Quando comparado a bases maiores). 

Já as bases maiores, são quase que analogamente opostas as bases menores, permitem a representação com baixa quantidade de elementos da base, porém sua utilização e tratamento de erro devem ser mais bem especificados que as bases menores. (Para a escrita do texto, foi considerado 'base maior' elementos como base 10 ou superior)

Por fim, para retratar a questão da quantidade de elementos presentes em cada base para representar um número, o gráfico abaixo apresenta a quantidade de elementos necessários para representar o número 42 em diferentes bases.

<div align="center">
    <img src="imagens/42_len_bases.png">
</div>

Calculando utilizando $Log_b N$, onde b é a base e N número. 

**2) Sobre bases menores que 2**

Considerando o conceito de base, podemos afirmar que é possível que existam bases não inteiras, para a resposta a esta questão, façamos a consideração de apenas bases inteiras possitivas. 

Com isso, base abaixo de 2 (Binária) é base unária, que nos remetem diretamente a forma básica que aprendemos a cálcular, que foi facilitada com a representação dos números com as bases. 

Então, por exemplo, para o número 13 na base 10, tem-se o seguinte número na base unária.

```
1111111111111
```

Se a este número, quisermos somar o número 10, teriamos de fazer

```
1111111111111 + 1111111111
```

Com isso é possível afirmar que a base unária mesmo sendo símples e intuitiva em um primeiro momento, o que explica seu uso para o ensino nas primeiras aulas de matemática de nossas vidas, passa a ser complicado seu uso, seja por quantidade de dígitos representados ou mesmo o tempo que pode ser gasto para representar operações com grandes números em tal base.

**3) Qual outra técnica é possível de ser utilizada para a conversão de base N para base M que não utilize uma base auxíliar**

> A resposta para esta questão é um resumo do conteúdo criado por Roberto Brusnicki em [seus vídeos sobre conversão de base numérica](https://www.youtube.com/watch?v=BJuoZMqh9Og)

Uma das possíveis formas para a conversão sem a necessidade da base 10 é aplicar o método nomeado aqui de **Conversão explícita**, explicado abaixo.

**Método de conversão por força bruta**

Antes de ir para o método de conversão explícita, vamos entender o que é o método de conversão por força bruta. 

Neste algoritmo, a ideia é ir fazendo decrementos e incrementos nas bases de origem e destino, respectivamente, onde, para a base de origem decrementos de 1 vão sendo feitos e na base de destino incrementos de 1 vão sendo feitos. O processo de incremento/decremento é feito até que os elementos da base original sejam iguais a zero.

O ponto interessante deste algoritmo é que, o processo de incremento/decremento deve ser feito diretamente na base em questão.

**Método da conversão explícita**

Com o método de conversão por força bruta entendido, vamos ao método da conversão explícita. Para facilitar o processo de explicação, vamos direto a um exemplo.

Considere a seguinte conversão de base

$$
(abcde)_x \Rightarrow (ABCDE)_y
$$

Para esta conversão, através deste método, é necessário primeiro fazer a conversão de cada um dos elementos explicitamente, incluíndo a base. 

$$
a_x = a_y \\
b_x = b_y \\
c_x = c_y \\
d_x = d_y \\
e_x = e_y \\
x = x_y \\
$$

É nesta parte do método que o algoritmo de força bruta pode ser utilizado. Com cada um dos elementos convertidos (Incluindo a base), é possível aplicar a mesma fórmula polinomial de conversão dos elementos em base 10, assim como apresentado abaixo.

$$
(abcde)_x = a_y * x_y^4 + b_y * x_y^3 + c_y * x_y^2 + d_y * x_y^1 + a_y * x_y^0
$$

Mas perceba uma coisa interessante, ao realizar as operações acima é importante que os métodos de soma, multiplicação e exponenciação sejam feitos considerando a base em questão.

É importante dizer isto já que, ao tratarmos dados numéricos em um computador, todas as suas operações já são feitas na base 10, ou seja, para a implementação de tal método é preciso que os métodos de soma e multiplicação sejam adequados as bases que estão sendo convertidas.

Isso vale também para as operações que você faz "a mão", é preciso já ter em mente que as operações aritméticas estão sendo feitas em uma base diferente.

Caso você ache interessante evitar a exponencial em outra base, a forma abaixo pode ser utilizada.

$$
(abcde)_x = (((a_y * x_y + b_y) * x_y + c_y) * x_y + d_y) * x_y + e_y
$$

Novamente, todo o conteúdo utilizado nesta resposta foi retirado dos vídeos feitos por Roberto Brusnicki  em [seus vídeos sobre conversão de base numérica](https://www.youtube.com/watch?v=BJuoZMqh9Og), obrigado por compartilhar!


#### Lista 3 - Interpolação por polinômios

**1) Interpole, de forma genérica, um conjunto de dois pares de pontos**

Com base nos exercícios realizados na lista 3 e também na forma como os polinômios de L vão sendo gerados, ao considerar dois pares de pontos, a figura geométrica que possívelmente representa a interpolação desses pares é uma reta, logo este exercício pode ser ilustrado pelas partes da Figura abaixo, onde a situação A representa a etapa inicial, onde temos apenas os pontos e a situação B é a solução do exercício.

<div align="center">
    <img src="imagens/passos_exercicio3_extra.png">
</div>

Desta forma, para resolver tal exercício de maneira genérica, considerando apenas a representação geométrica, faz-se necessário a realização do ajuste de uma reta, que será utilizada para a interpolação de tais pontos.

Para isto, considere os seguintes pontos. 

|        | $x_0$ | $x_1$ |
|:------:|:-----:|-------|
|   $x$  |   a   | c     |
| $f(x)$ |   b   | d     |

Ao realizar um ajuste linear dos mesmos temos que:

Primeiro fazer o ajuste do coeficiente angular da reta ($m$)

$$
m = \frac{y_2 - y_1}{x_2 - x_1}
$$

$$
m = \frac{d - b}{c - a}
$$

Com a determinação do coeficiente angular, fazemos

$$
y - y_1 = m * (x - x_1)
$$

$$
y - b = \frac{d - b}{c - a} * x -2
$$

$$
y = \frac{d - b}{c - a} * (x -2) + b
$$

**Observação**: Fazendo alguns testes antes de escrever a solução deste exercício, foi possível perceber que, aproximar um polinômio interpolador ou o ajuste de uma reta, para dois pontos, temos os mesmos resultados, o que influênciou na resposta deste exercício.

**2) Um polinômio pode ser melhor que outro ?**

Para responder esta pergunta, vamos a um exemplo. Considere um conjunto de 3 pontos e a necessidade da realização de uma interpolação sobre esses pontos. Aplicar tal interpolação utilizando um polinômio de grau 1 pode será o suficiente para a obtenção de um bom resultado de interpolação, porém ao aumentar o grau do polinômio interpolador para 2, pode-se obter bons resultados.

Desta forma, considerando o contexto apresentado acima, é possível afirmar que um polinômio é melhor que outro.

**Lembre-se**: Como já foi discutido em sala de aula, qualidade (Neste caso, 'ser melhor'), indica adequação ao uso e contexto.

**3) O polinômio interpolador é único para qualquer grau ?**

Seguindo a descrição de um polinômio interpolador, `um polinômio só é único quando seu grau está associado a quantidade de pontos` ($n - 1$)

Desta forma, a depender a disposição dos pontos, podem existir infinitos polinômios de maior grau que a quantidade de pontos que possam interpolar os pontos considerados.

**Sobre a ideia**: Para ficar claro a ideia utilizada na formulação 'genérica' da resposta acima, vou apresentar a ideia que utilizei, que é derivada de um exposição apresentada durante as aulas. Considere 3 pontos, agora considere que, podem existir polinômios de grau 3 ou maior que possam passar exatamente por esses elementos. 

**Adendo apresentado pelo professor**: Ao considerar a ideia acima é importante que uma informação fique clara e bem definida. `Não é porque a interpolação foi feita com um polinômio de grau 3, que o comportamento modelado é necessariamente cúbido`, sendo que esta regra vale para demais contexto que você pode vir a pensar.

**4) Aumentar o grau é simplesmente concatenar novo termo/coeficiente ?**

Não, o comportamento geral do polinômio é criado através de todos os seus termos. Ao adicionar um novo termo, todos os demais devem ser reajustados para trabalhar 'seguindo'/compondo o comportamento geral.

Durante a realização da [lista de exercícios 3](https://fmenino-cap-239.netlify.com/lista_3/), testes foram feitos com a decomposição dos polinômios. Tal fato é um exemplo que apenas a composição dos polinômios não representa o aumento de seu grau, o comportamento de cada um deles foi modelado já considerando um grau superior.

#### Lista 4 - Integração numérica

**1) Para melhorar os resultados da integração, o que vale mais a pena: aumentar o grau do polinômio interpolador ou “tender h a 0” ?**

De uma maneira geral, podemos considerar que o aumento do `h` pode ser bastante útil para os métodos de integração numérica que fazem a utilização dos polinômios, isso já que, quanto mais se aproxima de zero, maior será a subdivisão realizada sob a função que está sendo integrada. O resultado de tal aproximação a zero é que, cada subintervalo será tão pequeno, que sua visualização será linear.

Pode ser que o aumento do grau do polinômio seja útil e necessário, porém a depender do contexto, comportamento modelado e quantidade de pontos considerados, os erros gerados com os polinômios (Considerando os métodos vistos em sala de aula) podem interferir muito nos resultados da integração.

**2) Os métodos que vimos em sala são aplicáveis ao cálculo de integrais múltiplas?**

Considerando a maneira como as integrais múltiplas são calculadas é possível afirmar que os métodos vistos em sala podem ser utilizados para o cálculo dessas.

De maneira geral, o que será feito é, utilizar a saída do cálculo de uma integral como entrada para o processo de outra integração. Para entender melhor este processo, vejamos um exemplo.

Considerando a seguinte integral dupla, façamos seu calculo utilizando a regra dos trapézios.

$$
\int _{-5}^5\:\int _{-3}^3\:x^2+y^2dx\:dy
$$

Para iniciar, os valores de $x$ e $x$ utilizados são gerados através dos intervalos definidos na integral.

```matlab
x = -3:.1:3; 
y = -5:.1:5; 
[X,Y] = meshgrid(x,y);
```

Com os valores gerados, os mesmos são aplicados na formula da equação $x^2 + y^2$

```matlab
F = X.^2 + Y.^2;
```

Após a geração desses valores, os mesmos podem ser utilizados para a integração com o método dos trapézios.

```matlab
I = trapz(y,trapz(x,F,2))
% I = 680.2000
```

> Exemplo adaptado da página de [documentação do Matlab](https://www.mathworks.com/help/matlab/ref/trapz.html)

Em suma, o que o exemplo apresenta é que, para a utilização do método da regra dos trapézios em integrais multiplas é necessário trabalhar cada uma das integrais separadamente e então o resultado de uma ser considerada para a geração do resultado de outra integral.

Através de uma interpretação geométrica é possível afirmar que os passos apresentados fazem sentido. Considere o cálculo de um volume através de uma integral dupla, o que é feito essencialmente é, primeiro o cálculo da base da geometria analisada e em seguida o calculo da altura. Ao olhar para cada uma dessas operações, é possível entender a natureza de uso dos resultados entre elas, que segue um contexto parecido com o que foi apresentado no exemplo anterior.

<!-- Como considerar as direções de integração ? Aqui está sendo considerado que o processo de integração vai da esquerda para a direita ou da direta para a esquerda ? Se sim, não posso simplesmente fazer a integração numérica e alterar o sinal ? -->

#### Lista 5 - Soluções numéricas de Equações Diferenciais

**1) O que é uma função? Função X tabela de pontos X interpolação**

Antes da interpretação de representações que as funções possuem dentro da matemática, onde são utilizadas para basicamente representar ou modelar ou certo comportamento, funções são objetos associativos, que vínculam certos elementos.

Analisando por este lado, ao considerar uma função, uma tabela de pontos e o resultado de uma interpolação, conseguimos perceber que essas tem uma ligação, o `fato de fazer relacionamentos`. Claro que é necessário citar que, nem sempre os mesmos processos podem ser feitos com cada um dos elementos citados. 

Indo para o contexto de representação que as funções possuem, podemos dar explicações sobre cada um dos conceitos apresentados anteriormente, onde:

- Funções: Podem ser vistas como a representação genérica de um determinado comportamento;
- Tabela de pontos: Representação física de um determinado comportamento, não possuindo explicitamente a relação que seus `relacionamentos` possuem, o que não ocorrre nas `funções`, definidas anteriormente;
- Interpolação: Busca criar uma representação de um comportamento genérico, ou seja, busca através de um determinado conjunto de pontos ou mesmo função, criar uma forma de representar esses criando uma forma de relação explicita entre os elementos.

> As definições feitas acima estão bastante distantes de definições formais. Elas são básicamentes formas de intepretação encontradas para ficar mais fácil entender cada um dos métodos vistos em sala de aula
