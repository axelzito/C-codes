/* Na matemática, um número perfeito é aquele que é igual à soma dos seus divisores.
 * Por exemplo o número 6 é perfeito, pois 1+2+3 é igual a 6.
 * Sua tarefa é escrever um programa que imprima se um determinado número é perfeito ou não. */

#include<stdio.h>

int main(){

	int num, i, j, n, perf=0;

	scanf("%d", &n);
	while(n<0 || n>20){
		scanf("%d", &n);
	}

	for(i=1; i<=n; i++){
		scanf("%d", &num);
		for(j=1; j<num; j++){
			if(num%j==0){
				perf+=j;
			}
		}
		if(perf==num){
			printf("%d eh perfeito\n", num);
		}
		if(perf!=num){
			printf("%d nao eh perfeito\n", num);
		}
		perf=0;
	}

	return 0;
}
