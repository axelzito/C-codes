/* Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos. */

#include<stdio.h>
#define MAX 5

int main(){

    int i, v[MAX], aux=0, pos=0;

    for(i=0; i<MAX; i++){
        scanf("%d", &v[i]);
    }

    for(i=0; i<MAX; i++){
        if(v[i]>aux){
            aux=v[i];
            pos=i+1;
        }
    }

    printf("%d\n%d\n", aux, pos);

    return 0;
}
