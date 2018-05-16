/* Este programa deve ler uma variável inteira X inúmeras vezes (deve parar quando o valor no arquivo de entrada for igual a zero).
 Para cada valor lido imprima a sequência de 1 até X, com um espaço entre cada número e seu sucessor.

Obs: cuide para não deixar espaço em branco após o último valor apresentado na linha ou você receberá Presentation Error.*/

#include <stdio.h>

int main(){

    int x, i;

    for(; ;){
        scanf("%d", &x);
        if(x==0){
            break;
        }
        for(i=1; i<x; i++){
            printf("%d ", i);
        }
        printf("%d\n", x);
    }

    return 0;
}
