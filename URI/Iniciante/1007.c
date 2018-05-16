/* Leia quatro variáveis A, B, C e D.
A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D (A * B - C * D).*/

#include<stdio.h>

int main (){

    int a, b, c, d, res;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    res=(a*b)-(c*d);
    printf("DIFERENCIA = %d\n", res);

    return 0;
}
