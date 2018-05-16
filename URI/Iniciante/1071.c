/* Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles. */

#include<stdio.h>

int main(){
	
	int i, x, y, aux, soma=0;
	
	scanf("%d", &x);
	scanf("%d", &y);
	
	if(y<0){
		aux=y;
		y=x;
		x=aux;
	}
	
	for(i=x+1; i<y; i++){
		if(i%2!=0){
			soma+=i;
		}
	}
	
	printf("%d\n", soma);
	
	return 0;
}
