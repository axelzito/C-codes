/* A fórmula para calcular a área de uma circunferência é: A = π . R2.
Sendo que o valor de é π = 3.14159:

Efetuar o cálculo da área, elevando o valor de R ao quadrado e multiplicando por π. */

#include<stdio.h>

int main(){

    float pi = 3.14159, a;
    int r;

    scanf("%d", &r);
    a=pi*(r*r);
    printf("A=%.4f", a);

    return 0;
}
