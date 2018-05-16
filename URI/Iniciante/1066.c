/* Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, quantos valores digitados foram ímpares,
	quantos valores digitados foram positivos e quantos valores digitados foram negativos. */

#include<stdio.h>

int main(){
	
	int n1, n2, n3, n4, n5, countpar=0, countimpar=0, countpos=0, countneg=0;
	
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	scanf("%d", &n4);
	scanf("%d", &n5);
	
	//par
	if(n1%2==0){
		countpar++;
	}
	if(n2%2==0){
		countpar++;
	}
	if(n3%2==0){
		countpar++;
	}
	if(n4%2==0){
		countpar++;
	}
	if(n5%2==0){
		countpar++;
	}
	
	//impar
	if(n1%2!=0){
		countimpar++;
	}
	if(n2%2!=0){
		countimpar++;
	}
	if(n3%2!=0){
		countimpar++;
	}
	if(n4%2!=0){
		countimpar++;
	}
	if(n5%2!=0){
		countimpar++;
	}
	
	//positivo
	if(n1>0){
		countpos++;
	}
	if(n2>0){
		countpos++;
	}
	if(n3>0){
		countpos++;
	}
	if(n4>0){
		countpos++;
	}
	if(n5>0){
		countpos++;
	}
	
	//negativo
	if(n1<0){
		countneg++;
	}
	if(n2<0){
		countneg++;
	}
	if(n3<0){
		countneg++;
	}
	if(n4<0){
		countneg++;
	}
	if(n5<0){
		countneg++;
	}
	
	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", countpar, countimpar, countpos, countneg);
	
	return 0;
}
