/* Leia duas valores inteiros. A seguir, calcule o produto entre estes valores e atribua à variável PROD.
A seguir mostre a variável PROD com mensagem correspondente.
Não esqueça o fim de linha após o produto, caso contrário seu programa apresentará a mensagem: “Presentation Error”.*/

#include <stdio.h>

int main (){

    int PROD, a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    PROD=a*b;
    printf("PROD = %d\n", PROD);

    return 0;
}
