/* Leia 2 valores, no caso A e B. Efetue a soma de A e B implicando seu resultado na vari�vel X. Imprima X conforme exemplo apresentado abaixo.
N�o esque�a de imprimir o fim de linha ap�s o resultado, caso contr�rio, voc� receber� "Presentation Error". */

#include <stdio.h>

int main () {

    int x, a, b;

    scanf("%d", &a);
    scanf("%d", &b);
    x=a+b;
    printf("X = %d", x);

    return 0;
}
