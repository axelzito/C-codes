#include <stdio.h>

int main (){

    int t, a, b, i, aux, inv1=0, inv2=0, algarismo;

    scanf("%d", &t);

    for(i=0; i < t; i++){
        scanf("%d %d", &a, &b);

        aux = a;
        while (aux > 0) {
            algarismo = aux % 10;
            inv1 = 10*inv1 + algarismo;
            aux = (int) aux/10;
        }

        aux=0, algarismo=0;

        aux = b;
        while (aux > 0) {
            algarismo = aux % 10;
            inv2 = 10*inv2 + algarismo;
            aux = (int) aux/10;
        }

        if(inv1>inv2){
            printf("%d\n", inv1);
        } else {
            printf("%d\n", inv2);
        }

        inv1=0, inv2=0;
    }

    return 0;
}
