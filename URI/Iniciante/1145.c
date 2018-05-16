/* Escreva um programa que leia dois valores X e Y.
 * A seguir, mostre uma sequência de 1 até Y, passando para a próxima linha a cada X números.

Entrada
	O arquivo de entrada contém dois valores inteiros, (1 < X < 20) e (X < Y < 100000). */

#include<stdio.h>

int main(){

	int x, y, cont = 1, j;

	scanf("%d %d", &x, &y);

	while(1){
		for(j = 1; j <= x; j++){

			if(j != x){
				printf("%d ", cont);
			}else{
				printf("%d", cont);
			}
			cont ++;
		}

		printf("\n");

		if(cont >= y){
			return 0;
		}
	}

	return 0;

}
