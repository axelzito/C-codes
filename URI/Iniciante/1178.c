/*  Leia um valor X. Coloque este valor na primeira posição de um vetor N[100].
    Em cada posição subsequente de N (1 até 99), coloque a metade do valor armazenado na posição anterior, conforme o exemplo abaixo.
    Imprima o vetor N. */

#include<stdio.h>

int main(){

    int i;
    double n[100], x;

    scanf("%lf", &x);

    for(i=0; i<100; i++){
        n[i]=x;
        printf("N[%d] = %.4lf\n", i, n[i]);
        x=(x/2);
    }

    return 0;
}
