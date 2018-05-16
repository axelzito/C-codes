/* Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.
Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.*/

#include<stdio.h>

int main(){
	
	int hrinicio, hrfim, mininicio, minfim, hrduracao, minduracao, tempmin, temphr;
	
	scanf("%d %d %d %d", &hrinicio, &mininicio, &hrfim, &minfim);
	
	hrduracao = hrfim-hrinicio;
	minduracao = minfim-mininicio;
	
	if(hrduracao>0){
		temphr=hrduracao;
		//printf("O JOGO DUROU %d HORA(S)\n", duracao);
	}
	if(hrduracao<0){
		hrduracao = (24-hrinicio)+hrfim;
		temphr=hrduracao;
		//printf("O JOGO DUROU %d HORA(S)\n", duracao);
	}
	if (minduracao>0){
		tempmin=minduracao;
	}
	if (minduracao<0){
		minduracao=(60-mininicio)+minfim;
		tempmin=minduracao;
	}
	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", temphr, tempmin);

	return 0;
}
