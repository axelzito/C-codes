/* Este programa deve ler uma vari�vel inteira X in�meras vezes (deve parar quando o valor no arquivo de entrada for igual a zero).
 Para cada valor lido imprima a sequ�ncia de 1 at� X, com um espa�o entre cada n�mero e seu sucessor.

Obs: cuide para n�o deixar espa�o em branco ap�s o �ltimo valor apresentado na linha ou voc� receber� Presentation Error.*/

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
