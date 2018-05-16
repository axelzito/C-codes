/* Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir.
   Cada caso de teste consiste de dois inteiros X e Y.
   Você deve apresentar a soma de Y ímpares consecutivos a partir de X inclusive o próprio X se ele for ímpar.
   Por exemplo:
   para a entrada 4 5, a saída deve ser 45, que é equivalente à: 5 + 7 + 9 + 11 + 13
   para a entrada 7 4, a saída deve ser 40, que é equivalente à: 7 + 9 + 11 + 13 */

#include<stdio.h>

int main(){
	
	int n, i=0, j, x, y, soma=0;
	
	scanf("%d", &n);
	while(i<n){
		scanf("%d %d", &x, &y);
		for(j=x; j<=(x+(y*2)); j++){
			if(j%2!=0){
				soma+=j;
			}
		}
		printf("%d\n", soma);
		soma=0;
		i++;
	}
	
	return 0;
}
