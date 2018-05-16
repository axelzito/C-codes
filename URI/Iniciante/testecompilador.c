#include<stdio.h>

int main() {

	int valor;
	float nota1;

    scanf("%d", &valor);

	nota1=valor%100;
	printf("%.2f nota(s) de R$ 100,00\n", nota1);

	return 0;
}
