/* Escrever um programa leia 2 valores X e Y e que imprima todos os valores entre eles 
	cujo resto da divisão dele por 5 for igual a 2 ou igual a 3. */
	
#include<stdio.h>

int main(){
	
	int aux, x, y, i;
	
	scanf("%d", &x);
	scanf("%d", &y);
	
	if(y<x){
		aux=y;
		y=x;
		x=aux;
	}
	
	for(i=x+1; i<y; i++){
		if(i%5==2 || i%5==3){
			printf("%d\n", i);
		}
	}
	
	return 0;
}
