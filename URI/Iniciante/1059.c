/* Faça um programa que mostre os números pares entre 1 e 100, inclusive.*/

#include<stdio.h>

int main(){
	
	int par=2;
	printf("2\n");
	while(par>1 && par<100){
		par=par+2;
		printf("%d\n", par);
	}
	
	return 0;
}
