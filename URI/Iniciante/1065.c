/* Faça um programa que leia 5 valores inteiros. Conte quantos destes valores digitados são pares e mostre esta informação.*/

#include<stdio.h>

int main(){
	
	int n1, n2, n3, n4, n5, count=0;
	
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	scanf("%d", &n4);
	scanf("%d", &n5);
	
	if(n1%2==0){
		count++;
	}
	if(n2%2==0){
		count++;
	}
	if(n3%2==0){
		count++;
	}
	if(n4%2==0){
		count++;
	}
	if(n5%2==0){
		count++;
	}
	
	printf("%d valores pares\n", count);
	
	return 0;
}
