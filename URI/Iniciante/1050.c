/* Leia um número inteiro que representa um código de DDD para discagem interurbana.
Em seguida, informe à qual cidade o DDD pertence, considerando a tabela abaixo:

Brasilia 61
Salvador 71
Sao Paulo 11
Rio de Janeiro 21
Juiz de Fora 32
Campinas 19
Vitoria 27
Belo Horizonte 31

Se a entrada for qualquer outro DDD que não esteja presente na tabela acima, o programa deverá informar:
DDD nao cadastrado*/

#include<stdio.h>

int main(){
	
	int ddd;
	
	scanf("%d", &ddd);
	
	if(ddd==61){
		printf("Brasilia\n");
	}else if(ddd==71){
		printf("Salvador\n");
	}else if(ddd==11){
		printf("Sao Paulo\n");
	}else if(ddd==21){
		printf("Rio de Janeiro\n");
	}else if(ddd==32){
		printf("Juiz de Fora\n");
	}else if(ddd==19){
		printf("Campinas\n");
	}else if(ddd==27){
		printf("Vitoria\n");
	}else if(ddd==31){
		printf("Belo Horizonte\n");
	}else{
		printf("DDD nao cadastrado\n");
	}
	
	return 0;
}
