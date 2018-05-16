/* O programa deve ler um valor inteiro X indefinidas vezes. 
 * (O programa irá parar quando o valor de X for igual a 0).
 *  Para cada X lido, imprima a soma dos 5 pares consecutivos a partir de X, inclusive, se X for par. 
 *  Se o valor de entrada for 4, por exemplo, a saída deve ser 40, que é o resultado da operação: 4+6+8+10+12, 
 *  enquanto que se o valor de entrada for 11, por exempo, a saída deve ser 80, que é a soma de 12+14+16+18+20. */

#include<stdio.h>

int main(){
	
	int x, i, soma=0;
	
	for(; ;){
		scanf("%d", &x);
		if(x==0){
			break;
		}
		for(i=x; i<(x+10); i++){
			if(i%2==0){
				soma+=i;
			}
		}
		printf("%d\n", soma);
		soma=0;
	}
	
	return 0;
}
