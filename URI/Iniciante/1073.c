/* Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N, inclusive N, se for o caso.
 
	Entrada
		A entrada contém um valor inteiro N (5 < N < 2000).
	Saída
		Imprima o quadrado de cada um dos valores pares, de 1 até N, conforme o exemplo abaixo. */

#include<stdio.h>

int main(){
	
	int n, i, quad;
	
	scanf("%d", &n);
	if(n<5 || n>2000){
		scanf("%d", &n);
	}
	
	for(i=1; i<=n; i++){
		if(i%2==0){
			quad=i*i;
			printf("%d^2 = %d\n", i, quad);
		}
	}
	
	
	return 0;
}
