/* Escreva um programa que leia um valor inteiro N (1 < N < 1000). 
 * Este N é a quantidade de linhas de saída que serão apresentadas na execução do programa. */

#include<stdio.h>

int main(){
	
	int n, i=1;
	
	scanf("%d", &n);
	if(n<1 || n>1000){
		scanf("%d", &n);
	}
	
	while(i<=n){
		printf("%d %d %d\n", i, i*i, i*i*i);
		i++;
	}
	
	return 0;
}
