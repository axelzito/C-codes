/* Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo,
sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração máxima de 24 horas.*/

#include<stdio.h>

int main(){
	
	int inicio, fim, duracao;
	
	scanf("%d %d", &inicio, &fim);
	
	duracao = fim-inicio;
	
	if(duracao>0){
		printf("O JOGO DUROU %d HORA(S)\n", duracao);
	}
	if(duracao<0){
		duracao = (24-inicio)+fim;
		printf("O JOGO DUROU %d HORA(S)\n", duracao);
	}

	return 0;
}
