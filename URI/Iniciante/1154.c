/* Faça um algoritmo para ler um número indeterminado de dados, contendo cada um, a idade de um indivíduo.
 * O último dado, que não entrará nos cálculos, contém o valor de idade negativa.
 *  Calcular e imprimir a idade média deste grupo de indivíduos. */

#include<stdio.h>

int main(){

	int idade=0, count=0;
	float media=0, soma=0;

	while(idade>=0){
		scanf("%d", &idade);
		if(idade<=0){
			media=soma/count;
			printf("%.2f\n", media);
			break;
		}
		soma+=idade;
		count++;
	}

	return 0;
}
