/* Faça um algoritmo para ler um valor A e um valor N.
Imprimir a soma dos N números a partir de A(inclusive). Caso N seja negativo ou ZERO, deverá ser lido um novo N(apenas N).*/

#include<stdio.h>

int main(){

    int a, n, i, soma=0;

    scanf("%d %d", &a, &n);
    while(n<=0){
        scanf("%d", &n);
    }

    for(i=a; i<n+a; i++){
        soma+=i;
    }

    printf("%d\n", soma);

    return 0;
}
