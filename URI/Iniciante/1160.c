/* Mariazinha quer resolver um problema interessante.
  Dadas as informações de população e a taxa de crescimento de duas cidades quaisquer (A e B),
  ela gostaria de saber quantos anos levará para que a cidade menor (sempre é a cidade A) ultrapasse a cidade B em população.
  Claro que ela quer saber apenas para as cidades cuja taxa de crescimento da cidade A 
  é maior do que a taxa de crescimento da cidade B, portanto,
  previamente já separou para você apenas os casos de teste que tem a taxa de crescimento maior para a cidade A. 
  Sua tarefa é construir um programa que apresente o tempo em anos para cada caso de teste.

  Porém, em alguns casos o tempo pode ser muito grande, e Mariazinha não se interessa em saber exatamente o tempo 
  para estes casos. Basta que você informe, nesta situação, a mensagem "Mais de 1 seculo". 
	
  Entrada

A primeira linha da entrada contém um único inteiro T, indicando o número de casos de teste (1 ≤ T ≤ 3000). 
* Cada caso de teste contém 4 números: dois inteiros P1 e P2 (1 ≤ P1 ≤ 1000000, 1 ≤ P2 ≤ 1000000, P1 ≤ P2 ) 
* indicando respectivamente a população de A e B, e dois valores G1 e G2 (0.1 ≤ G1 ≤ 10.0, 0.1 ≤ G2 ≤ 10.0, G2 ≤ G1 ) 
* com um digito após o ponto decimal cada, indicando respectivamente o crescimento populacional de A e B. */
	
#include<stdio.h>

int main(){
	
	int n, i;
	double popA, popB, taxaCresA, taxaCresB, anos;
	
	scanf("%d", &n);
	while(n<1 || n>3000){
		scanf("%d", &n);
	}
	
	for(i=1; i<=n; i++){
		scanf("%lf %lf %lf %lf", &popA, &popB, &taxaCresA, &taxaCresB);
	
	
	}
	
	return 0;
}
