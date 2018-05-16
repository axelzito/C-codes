/*  Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para
organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano, 
quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada.

Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos.
Para obter estas informação, ela sabe exatamente o número de experimentos que foram realizados,
o tipo de cobaia utilizada e a quantidade de cobaias utilizadas em cada experimento. 

Entrada
A primeira linha de entrada contém um valor inteiro N que indica os vários casos de teste que vem a seguir.
Cada caso de teste contém um inteiro Q (1 ≤ Q ≤ 10) que representa a quantidade de cobaias utilizadas e um
caractere T ('C', 'R' ou 'S'), indicando o  tipo de cobaia (R:Rato S:Sapo C:Coelho). */
  
#include<stdio.h>

int main(){
	
	int i, n, qnt, cobaias;
	char especie[1];
	
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%s", especie);
		scanf("%d", &qnt);
		cobaias=qnt++;
	}
	
	
	return 0;
}
