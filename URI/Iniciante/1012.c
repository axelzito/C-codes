/* Escreva um programa que leia três valores com ponto flutuante: A, B e C. Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e c por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B. */

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
