/* Escreva um algoritmo para calcular e escrever o valor de S, sendo S dado pela fórmula:
S = 1 + 3/2 + 5/4 + 7/8 + ... + 39/? */

#include<stdio.h>

int main(){

    double i, s=0, j=1;

    for(i=3; i<=39; i+=2){
        s+=(i/(j*2));
        j=j*2;
    }

    printf("%.2lf\n", s+1);

    return 0;
}
