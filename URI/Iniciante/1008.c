/* Escreva um programa que leia o n�mero de um funcion�rio, seu n�mero de horas trabalhadas,
o valor que recebe por hora e calcula o sal�rio desse funcion�rio.
A seguir, mostre o n�mero e o sal�rio do funcion�rio, com duas casas decimais.*/

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
