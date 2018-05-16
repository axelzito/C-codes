/* Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir.
Cada caso de teste consiste de dois inteiros X e Y. Você deve apresentar a soma de todos os ímpares existentes entre X e Y.
* 
 Entrada
	A primeira linha de entrada é um inteiro N que é a quantidade de casos de teste que vem a seguir.
	Cada caso de teste consiste em uma linha contendo dois inteiros X e Y.
Saída
	Imprima a soma de todos valores ímpares entre X e Y. */
	
#include<stdio.h>

int main(){
	
	int i=0, j=0, n, x, y, aux, soma=0;
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		scanf("%d", &x);
		scanf("%d", &y);
		
		if(y<0 || y<x){
			aux=y;
			y=x;
			x=aux;
		}
		soma=0;
		for(j=x+1; j<y; j++){
			if(j%2!=0){
				soma+=j;
			}
		}
		printf("%d\n", soma);
	}
	
	return 0;
}
