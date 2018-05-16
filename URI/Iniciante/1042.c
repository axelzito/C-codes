/* Leia 3 valores inteiros e ordene-os em ordem crescente.
No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.*/

#include<stdio.h>

int main(){
	
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if(a<b && a<c && b<c){
		printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", a, b, c, a, b, c);
	}
	
	if(a<b && a<c && c<b){
		printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", a, c, b, a, b, c);
	}
	
	if(b<a && b<c && a<c){
		printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", b, a, c, a, b, c);
	}
	
	if(b<a && c<a && b<c){
		printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", b, c, a, a, b, c);
	}
	
	if(c<b && c<a && b<a){
		printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", c, b, a, a, b, c);
	}
	
	if(c<b && c<a && a<b){
		printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", c, a, b, a, b, c);
	}
	
	return 0;
}
