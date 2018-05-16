/* Leia um valor inteiro X (1 <= X <= 1000). Em seguida mostre os ímpares de 1 até X, um valor por linha,
  inclusive o X, ser for o caso.*/

#include<stdio.h>

int main(){
	
	int n, i;
	
	scanf("%d", &n);
	
	if(n<1 || n>1000){
		scanf("%d", &n);
	}
	
	for(i=0; i<=n; i++){
		if(i%2!=0){
			printf("%d\n", i);
		}
	}
	
	return 0;
}
