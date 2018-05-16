/* Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. 
 * Escreva para cada X e Y uma mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. */

#include<stdio.h>

int main(){
	
	int x, y;
	
	for( ; ; ) {
		scanf("%d %d", &x, &y);
		
		if(x>y){
			printf("Decrescente\n");
		}
		if(x<y){
			printf("Crescente\n");
		}
		if(x==y){
			break;
		}
	}
	
	return 0;
}
