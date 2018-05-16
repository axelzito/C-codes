/* A empresa ABC resolveu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo:

	salario			reajuste
	0-400				15
	400,01-800			12
	800.01-1200			10
	1200.01-2000		7
	>2000				4

Leia o salário do funcionário e calcule e mostre o novo salário,
bem como o valor de reajuste ganho e o índice reajustado, em percentual.*/

#include <stdio.h>

int main() {
	
	float salario, reajuste;
	
	scanf("%f", &salario);
	
	if(salario>0 && salario<=400.00){
		reajuste=salario*(0.15);
		salario=salario+reajuste;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", salario, reajuste);
	} else if(salario>=400.01 && salario<=800.00){
		reajuste=salario*(0.12);
		salario=salario+reajuste;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", salario, reajuste);
	} else if(salario>=800.01 && salario<=1200.00){
		reajuste=salario*(0.10);
		salario=salario+reajuste;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", salario, reajuste);
	} else if(salario>=1200.01 && salario<=2000.00){
		reajuste=salario*(0.07);
		salario=salario+reajuste;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", salario, reajuste);
	} else if(salario>2000){
		reajuste=salario*(0.04);
		salario=salario+reajuste;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", salario, reajuste);
	}
	
	return 0;
}
