# PAA_Sequencia_PUC-Minas
PUC MINAS Exercicio de PAA da sequencia e subsequência mais longa


Dada uma sequência de n números (9, 5, 2, 8, 7, 3, 1, 6, 4), deseja-se encontrar a “subsequência” mais longa cujos números estão em ordem crescente.


PUC MINAS

Pontifícia Universidade Católica de Minas Gerais

Bacharelado em Ciência da Computação

Projeto e Análise de Algoritmos

Profª. Raquel Mini

Este trabalho é individual e deverá ser feito nas linguagens C ou C++. As respostas devem ser enviadas em um arquivo zipado de nome -.zip, contendo os seguintes arquivos: fonte (.cpp, .h), executável (.exe) e documentação do trabalho (.pdf). Documentação entregue em formato diferente de pdf não será aceita. O código entregue deve estar comentado

SEQUÊNCIA CRESCENTE MAIS LONGA Dada uma sequência de n números (9, 5, 2, 8, 7, 3, 1, 6, 4), deseja-se encontrar a “subsequência” mais longa cujos números estão em ordem crescente. No problema em consideração, a sequência mais longa para s = (9, 5, 2, 8, 7, 3, 1, 6, 4) é de comprimento 3, podendo ser:

A subsequênica s1 = (2, 3 ,4) ou A subsequência s2 = (2, 3, 6)

Se estivéssemos procurando uma sequência contígua, o problema seria facilmente resolvido. Qual seria o número de soluções candidatas (contígua)? O número de soluções candidatas pode ser calculado pela recorrência:

Apresente um algoritmo que utilize a técnica de programação dinâmica para resolver esse problema e que tenha complexidade (n2).
