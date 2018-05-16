/* Ler um valor N. Calcular e escrever seu respectivo fatorial. Fatorial de N = N * (N-1) * (N-2) * (N-3) * ... * 1. */

#include<stdio.h>

int main(){
	
	int n, i, fat=1;
	
	scanf("%d", &n);
	while(n<0 || n>13){
		scanf("%d", &n);
	}
	
	for(i=n; i>1; i--){
		fat*=i;
	}
	
	printf("%d\n", fat);
	
	return 0;
}
