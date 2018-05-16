/* Escreva um programa que repeta a leitura de uma senha até que ela seja válida.
 *  Para cada leitura de senha incorreta informada, escrever a mensagem "Senha invalida". 
 *  Quanto a senha for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo encerrado.
 *  Considere que a senha correta é o valor 2002. */
 

#include<stdio.h>

int main(){
	
	int senha;
	
	for(; ;){
		scanf("%d", &senha);
		if(senha==2002){
			printf("Acesso Permitido\n");
			break;
		}else{
			printf("Senha Invalida\n");
		}
	}	
	
	return 0;
}
