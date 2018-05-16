/* Leia um valor inteiro X.
Em seguida apresente os 6 valores ímpares consecutivos a partir de X, um valor por linha, inclusive o X ser for o caso.*/

#include<stdio.h>

int main(){
	
	int i, x;
	
	scanf("%d", &x);
	
	for(i=x; i<=x+12; i++){
		if(i%2!=0){
			printf("%d\n", i);
		}
	}
	
	return 0;
}
