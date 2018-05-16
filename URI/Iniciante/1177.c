/* Faça um programa que leia um valor T e preencha um vetor N[1000] com a sequência de valores de 0 até T-1 repetidas vezes,
conforme exemplo abaixo. Imprima o vetor N. */

#include<stdio.h>

int main(){

	int i=0, t=0, valor, x[1000];

	scanf("%d", &valor);
	while(valor<2 || valor>50){
		scanf("%d", &valor);
	}

	for(i=0; i<1000; i++){
		x[i]=t;
		printf("N[%d] = %d\n", i, x[i]);
		t++;
		if(t==valor){
            t=0;
		}
	}

	return 0;
}
