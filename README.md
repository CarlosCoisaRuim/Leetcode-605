# Leetcode-605
Code solving exercise 605 from Leetcode, "Can Place Flowers".

## Informações 
**Nome**: Carlos Henrique Carvalho;

**Problema**: A proposta do exercício 605 é que nós temos um canteiro de flores representado por um array, onde 0's representam potes livres e 1's representam potes ocupados. O exercício então pede para determinarmos se, dado um array e um número n de flores, é possível realizar o plantio dessas flores de modo que não hajam flores adjacentes. 

**Solução**: Para resolver esse problema, é necessário percorrer o array checando os potes antecedentes e sucessores para confirmar se o espaço é propício para o plantio. Existem N maneiras de desenvolver esse algoritmo, porém eu optei por um sistema de pontos, onde cada pote vago vale um ponto (potes vagos nas extremidades valem dois pontos) e a cada checagem onde existam 3 ou mais pontos, esses pontos são consumidos e é feito um plantio. Caso o número atual da array represente um pote ocupado, os pontos são zerados. 

