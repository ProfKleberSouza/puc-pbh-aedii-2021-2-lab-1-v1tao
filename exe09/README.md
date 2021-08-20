# Exercício - Função recursiva - Placar Possíveis

Considere uma partida de futebol entre duas equipes A x B, cujo placar final seja $m$ x $n$, em que m e n são os némeros de gols marcados por A e B,
respectivamente. Implemente um algoritmo recursivo que imprima todas as possíveis sucessões de gols marcados. Por exemplo, para um resultado
de 3 x 1 as possíveis sucessões de gols são "`A A A B`", "`A A B A`", "`A B A A`" e "`B A A A`".

## Especificação

Sua função deve receber dois números inteiros como parâmetro e imprimir as combinações possíveis, seguindo o protótipo:

```c
void placar_possiveis(int m, int n);
```

As definições dos métodos devem ficar no arquivo `functions.h` e as implementações no arquivo `functions.c`.

## Testes

Os casos de testes devem seguir as definições para as estradas e saídas esperadas.

### Entrada

A entrada padrão deve receber dois números inteiros.

```
3 1
```

### Saída

Imprima as combinações possíveis.

```
AAAB
AABA
ABAA
BAAA
```

comecamos permutando a bolinha na pos[m - 1] $$$RESOLVIDO POR BUBBLE SORT
**************
 o o o - -
 o o - o -      
 o o - - o      |--> quando chegar no final, avancamos em 1 casa a bolinha na posicao [m - 2] --|
**************                                                                                    
 o - o o -      |--> antes {o o o - -} depois {o - o o -}                                     --|
 o - o - o      
**************  
 o - - o o      |--> novamente #### como apos a transformacao temos 2 bolinhas ja no caso excecao
**************                                          
 - o o o -      |--> PONTO CRITICO  ######## movemos as 3 primeiras bolinhas ##### antes {o o o - -} depois {- o o o -}
 - o o - o                              repetindo os passos
 - o - o o      
 - - o o o      |--> caso base, se placar_final == inverso_placar_inicial exita a funcao ## 
 
 o o - -
 o - o -
 o - - o
 - o o -
 - o - o
 - - o o
 -
 -
 -
 -
 -
 -
 -
 -
 















o o o - - -
o o - o - -
o o - - o -
o o - - - o
o - o o - -
o - o - o -
o - o - - o
o - - o o -
o - - o - o
o - - - o o
- o o o - -
- o o - o -
- o o - - o
- o - o o -
-
