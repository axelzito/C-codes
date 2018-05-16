/* Escreva um algoritmo para calcular e escrever o valor de S, sendo S dado pela fórmula:
S = 1 + 1/2 + 1/3 + … + 1/100 */

#include<stdio.h>

int main(){

    double s=0, i;

    for(i=1.0; i<=100.0; i++){
        s+=(1/i);
    }

    printf("%.2lf\n", s);

    return 0;
}
