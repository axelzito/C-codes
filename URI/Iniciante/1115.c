/* Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no sistema cartesiano.
 *  Para cada ponto escrever o quadrante a que ele pertence. O algoritmo será encerrado quando pelo menos uma de 
 * duas coordenadas for NULA (nesta situação sem escrever mensagem alguma).*/

#include<stdio.h>

int main(){
	
	int x, y;
	
	for(; ;){
		scanf("%d %d", &x, &y);
		if(x>0 && y>0){
			printf("primeiro\n");
		}
		if(x<0 && y>0){
			printf("segundo\n");
		}
		if(x<0 && y<0){
			printf("terceiro\n");
		}
		if(x>0 && y<0){
			printf("quarto\n");
		}
		if(x==0 || y==0){
			break;
		}
	}
	
	return 0;
}
