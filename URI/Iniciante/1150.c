/* Fa�a um prrograma que leia dois inteiros: X e Z (se Z for menor que X deve ser lido um novo valor para Z).
Contar quantos n�meros inteiros devemos somar em sequ�ncia ( a partir do X inclusive) para que a soma ultrapasse a Z o m�nimo poss�vel.
Escrever o valor final da contagem.*/

#include<stdio.h>

int main(){

    int i, x, z, soma=0, count=0;

    scanf("%d %d", &x, &z);
    while(z<x){
        scanf("%d", &z);
    }

    for(i=x; i<z; i++){
        soma+=i;
        count++;
        if(soma>z){
            printf("%d\n", count);
            break;
        }
    }

    return 0;
}
