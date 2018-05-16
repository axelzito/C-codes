/* Leia um valor inteiro N. Este valor será a quantidade de valores que serão lidos em seguida. Para cada valor lido, 
	mostre uma mensagem em inglês dizendo se este valor lido é
		par(EVEN), ímpar(ODD), positivo (POSITIVE), negativo (NEGATIVE) ou nulo (NULL).
			Deve haver um espaço entre as duas informações apresentadas. */
			
#include<stdio.h>

int main(){
	
	int n, x, i;
	
	scanf("%d", &n);
	if(n<0 || n>10000){
		scanf("%d", &n);
	}	
	
	for(i=1; i<=n; i++){
		scanf("%d", &x);
		if(x<(-(100000000)) || x>(100000000)){
			scanf("%d", &x);
		}
		if(x==0){
			printf("NULL\n");
		}else if(x>0 && x%2==0){
			printf("EVEN POSITIVE\n");
		}else if(x<0 && x%2==0){
			printf("EVEN NEGATIVE\n");
		}else if(x>0 && x%2!=0){
			printf("ODD POSITIVE\n");
		}else if(x<0 && x%2!=0){
			printf("ODD NEGATIVE\n");
		}
	}
	
	return 0;
}
