/* Leia 3 valores inteiros e efetue o cálculo das raízes da equação de báscara.
Se não foi possível calcular as raízes, mostre a mensagem correspondente
“Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int a, b, c, delta;
	float x1, x2;
	
	scanf("%d %d %d", &a, &b, &c);
	
	delta= (b*b)-(4*a*c);
	
	if(delta < 0){
		printf("Impossivel calcular\n");
	}else{
		x1 = ((-1*b) + sqrt(delta)) / (2*a);
		x2 = ((-1*b) - sqrt(delta)) / (2*a);
	
		printf("R1 = %.5f\nR2 = %.5f\n", x1, x2);
	}
	
	return 0;
}
