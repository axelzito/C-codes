/* O arquivo de entrada contém um valor real qualquer.
O programa deve apresentar uma mensagem dizendo em qual dos seguintes intervalos: [0,25] (25,50], (50,75], (75,100].
Se o valor for menor do que 0 ou maior do que 100 deve ser apresentada uma mensagem “Fora de intervalo”.

Por exemplo:
[0,25]  indica valores entre 0 e 25.0000, inclusive eles.
(25,50] indica valores maiores que 25 Ex: 25.00001 até o valor 50.0000000 */

#include<stdio.h>

int main(){
	
	float n;
	
	scanf("%f", &n);
	
	if(n <= 25){
		printf("Intervalo [0,25]\n");
	}
	if(n > 25 && n<=50){
		printf("Intervalo (25,50]\n");
	}
	if(n > 50 && n<=75){
		printf("Intervalo (50,75]\n");
	}
	if(n > 75 && n<=100){
		printf("Intervalo (75,100]\n");
	}
	
	return 0;
}
