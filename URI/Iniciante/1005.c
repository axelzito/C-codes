/* Leia 2 valores de ponto flutuante A e B, que correspondem a 2 notas de um aluno.
A seguir, calcule a média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5.
Assuma que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.*/

#include <stdio.h>

int main (){

    float a, b, med;
    scanf("%f", &a);
    scanf("%f", &b);
    med=(((a*3.5)+(b*7.5))/11);
    printf("MEDIA = %.5f", med);

    return 0;
}
