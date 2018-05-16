/* Escreva um programa que leia tr�s valores com ponto flutuante: A, B e C. Em seguida, calcule e mostre:
a) a �rea do tri�ngulo ret�ngulo que tem A por base e C por altura.
b) a �rea do c�rculo de raio C. (pi = 3.14159)
c) a �rea do trap�zio que tem A e B por bases e c por altura.
d) a �rea do quadrado que tem lado B.
e) a �rea do ret�ngulo que tem lados A e B. */

#include<stdio.h>

int main(){

    float a, b, c, pi = 3.14159;
    float tri, cir, trap, quad, ret;

    scanf("%f %f %f", &a, &b, &c);

    tri = (a*c)/2;
    cir = pi * (c*c);
    trap = ((a+b)*c)/2;
    quad = b*b;
    ret = a*b;

    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", tri, cir, trap, quad, ret);

    return 0;
}
