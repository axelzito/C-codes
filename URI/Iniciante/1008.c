/* Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas,
o valor que recebe por hora e calcula o salário desse funcionário.
A seguir, mostre o número e o salário do funcionário, com duas casas decimais.*/

#include<stdio.h>

int main (){

    int hrs, id;
    float salr;

    scanf("%d", &id);
    scanf("%d", &hrs);
    scanf("%f", &salr);

    salr = hrs*salr;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", id, salr);

    return 0;
}
