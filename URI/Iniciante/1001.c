/* Leia 2 valores, no caso A e B. Efetue a soma de A e B implicando seu resultado na variável X. Imprima X conforme exemplo apresentado abaixo.
Não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error". */

#include <stdio.h>

int main () {

    int x, a, b;

    scanf("%d", &a);
    scanf("%d", &b);
    x=a+b;
    printf("X = %d", x);

    return 0;
}
