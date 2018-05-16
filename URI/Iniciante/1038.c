/* Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item.
	A seguir, calcule e mostre o valor da conta a pagar.
	
 * codigo	especificação	preço
 * 1		cachorro quente	R$4.00
 * 2		x-salada		R$4.50
 * 3		x-bacon			R$5.00
 * 4		torrada simples	R$2.00
 * 5		refrigerante	R$1.50
 */	

#include<stdio.h>

int main(){
	
	int cod, qnt;
	float hotdog=4.00, xsalada=4.50, xbacon=5.00, torrada=2.00, refri=1.50, conta;
	
	scanf("%d %d", &cod, &qnt);
	
	if(cod==1){
		conta = hotdog*qnt;
	}
	
	if(cod==2){
		conta = xsalada*qnt;
	}
	
	if(cod==3){
		conta = xbacon*qnt;
	}
	
	if(cod==4){
		conta = torrada*qnt;
	}
	
	if(cod==5){
		conta = refri*qnt;
	}
	
	printf("Total: R$ %.2f\n", conta);
	
	return 0;
}
	
	
