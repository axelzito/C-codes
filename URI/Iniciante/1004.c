/* Leia duas valores inteiros. A seguir, calcule o produto entre estes valores e atribua � vari�vel PROD.
A seguir mostre a vari�vel PROD com mensagem correspondente.
N�o esque�a o fim de linha ap�s o produto, caso contr�rio seu programa apresentar� a mensagem: �Presentation Error�.*/

#include <stdio.h>

int main (){

    int PROD, a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    PROD=a*b;
    printf("PROD = %d\n", PROD);

    return 0;
}
