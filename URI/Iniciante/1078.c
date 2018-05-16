/* Leia 1 valor inteiro N (2 < N < 1000). A seguir, mostre a tabuada de N:      
1 x N = N      2 x N = 2N        ...       10 x N = 10N */

#include<stdio.h>

int main(){
	
	int n, mult, i;
	scanf("%d", &n);
	
	if(n<2 || n>1000){
		scanf("%d", &n);
	}
	
	for(i=1; i<=10; i++){
		mult=i*n;
		printf("%d x %d = %d\n", i, n, mult);
	}
	
	return 0;
}
