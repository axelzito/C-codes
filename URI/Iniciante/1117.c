/* Faça um programa que leia as notas referentes às duas avaliações de um aluno.
 * Calcule e imprima a média semestral.
 * Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao intervalo [0,10]).
 * Cada nota deve ser validada separadamente */

#include<stdio.h>

int main(){

	float n1, n2, media;

	scanf("%f", &n1);
	while(n1<0 || n1>10){
		printf("nota invalida\n");
		scanf("%f", &n1);
	}

	scanf("%f", &n2);
	while(n2<0 || n2>10){
		printf("nota invalida\n");
		scanf("%f", &n2);
	}

	media=(n1+n2)/2;
	printf("media = %.2f\n", media);

	return 0;
}
