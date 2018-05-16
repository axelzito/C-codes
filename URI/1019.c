/* Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica e informe-o
	expresso no formato horas:minutos:segundos.*/
	
#include<stdio.h>

int main(){
	
	int n, aux, hr, min, seg;
	
	scanf("%d", &n);
	
	aux = n%3600;
    hr = (n - aux) / 3600;
    min = (aux - aux%60) / 60;
    seg = aux%60;
    
	printf("%d:%d:%d\n", hr, min, seg);
	
	return 0;
}
