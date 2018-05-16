/* Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto.
As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1.
A seguir mostre o valor lido e a relação de notas necessárias.*/

#include<stdio.h>

int main() {
	
	int valor, aux, aux2, nota1, nota2, nota3, nota4, nota5, nota6, nota7;
	
	scanf("%d", &valor);
	printf("%d\n", valor);
	
	while(valor){
		
		if(valor>=100){
			aux=(valor/100);
			aux2=aux*100;
			valor=valor-aux2;
			nota1 += aux;
			printf("%d nota(s) de R$ 100,00\n", nota1);
		}else if(valor>=50){
			aux=(valor/50);
			aux2=aux*50;
			valor=valor-aux2;
			nota2 += aux;
			printf("%d nota(s) de R$ 50,00\n", nota2);
		}else if(valor>=20){
			aux=(valor/20);
			aux2=aux*20;
			valor=valor-aux2;
			nota3 += aux;
			printf("%d nota(s) de R$ 20,00\n", nota3);
		}else if(valor>=10){
			aux=(valor/10);
			aux2=aux*10;
			valor=valor-aux2;
			nota4 += aux;
			printf("%d nota(s) de R$ 10,00\n", nota4);
		}else if(valor>=5){
			aux=(valor/5);
			aux2=aux*5;
			valor=valor-aux2;
			nota5 += aux;
			printf("%d nota(s) de R$ 5,00\n", nota5);
		}else if(valor>=2){
			aux=(valor/2);
			aux2=aux*2;
			valor=valor-aux2;
			nota6 += aux;
			printf("%d nota(s) de R$ 2,00\n", nota6);
		}else if(valor>=1){
			aux=(valor/1);
			aux2=aux*1;
			valor=valor-aux2;
			nota7 += aux;
			printf("%d nota(s) de R$ 1,00\n", nota7);
		}
	}
	
	return 0;
}
