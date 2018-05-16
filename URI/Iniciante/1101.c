/* Leia um conjunto não determinado de pares de valores M e N (parar quando algum dos valores for menor ou igual a zero).
 * Para cada par lido, mostre a sequência do menor até o maior e a soma dos inteiros consecutivos entre eles 
 * (incluindo o N e M). */
 
	
#include<stdio.h>

int main(){
	
	int i=0, j=0, n, x, y, aux, soma=0;
		
	scanf("%d %d", &x, &y);
	//scanf("%d %d", &x, &y);
	//scanf("%d %d", &x, &y);
		
	if(y<0 || y<x){
		aux=y;
		y=x;
		x=aux;
	}
	soma=0;
	for(j=x+1; j<y; j++){
		soma+=j;
		
		printf("%d Sum=%d\n", j, soma);
	}
	
	return 0;
}
