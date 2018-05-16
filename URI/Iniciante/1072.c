/* Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
	Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, 
		mostrando essas informações. */

#include<stdio.h>

int main(){
	
	int n, i, x, count1, count2;
	
	scanf("%d", &n);
	if(n>=10000){
		scanf("%d", &n);
	}	
	
	for(i=1; i<=n; i++){
		scanf("%d", &x);
		if(x<(-(100000000)) || x>(100000000)){
			scanf("%d", &x);
		}
		if(x>=10 && x<=20){
			count1++;
		}else{
			count2++;
		}
	}
	
	printf("%d in\n%d out\n", count1, count2);
	
	return 0;
}
