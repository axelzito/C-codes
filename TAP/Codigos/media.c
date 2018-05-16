/* O número S é chamado média de dois números R1 e R2, se S é igual a (R1+R2)/2 .
O presente de aniversário de João para José foram dois inteiros R1 e R2. José prontamente calculou
a média dos seus presentes, a qual também era um número inteiro. Mas infelizmente José
perdeu o inteiro R2! Ajude José a recuperar R2. */

#include <stdio.h>

int main (){

    int i, s, t, r1, r2;

    scanf("%d", &t);

    for(i=0; i < t; i++){
        scanf("%d", &r1);
        scanf("%d", &s);
        r2 = (s*2)-r1;
        printf("%d\n", r2);
    }

    return 0;
}
