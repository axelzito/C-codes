/* Escreva um programa que leia um valor inteiro N. 
 * Este N é a quantidade de linhas de saída que serão apresentadas na execução do programa. */
/* 
 * 	1 2 3 PUM
	5 6 7 PUM
	9 10 11 PUM
	13 14 15 PUM
	17 18 19 PUM
	21 22 23 PUM
	25 26 27 PUM	*/

#include<stdio.h>

int main(){
	
	int n, i=0, j=0;
	
	scanf("%d", &n);
	
	while(i<n){
		j++;
		printf("%d ", j);
		j++;
		printf("%d ", j);
		j++;
		printf("%d PUM\n", j);
		j++;
		i++;
	}
	
	return 0;
}
