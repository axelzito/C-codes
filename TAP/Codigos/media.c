/* O n�mero S � chamado m�dia de dois n�meros R1 e R2, se S � igual a (R1+R2)/2 .
O presente de anivers�rio de Jo�o para Jos� foram dois inteiros R1 e R2. Jos� prontamente calculou
a m�dia dos seus presentes, a qual tamb�m era um n�mero inteiro. Mas infelizmente Jos�
perdeu o inteiro R2! Ajude Jos� a recuperar R2. */

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
