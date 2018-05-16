/* Faça um programa que calcule o mostre o volume de uma esfera sendo fornecido o valor de seu raio (R).
A fórmula para calcular o volume é: 4/3 * pi * R3. Considere (atribua) para pi o valor 3.14159. */

#include <stdio.h>

int main(){

    int raio;
    float pi=3.14159, esf, x=4/3;

    scanf("%d", &raio);
    esf = 1.3333333 * pi * (raio*raio*raio);
    printf("VOLUME = %.3f\n", esf);

    return 0;
}
