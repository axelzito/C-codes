/*Fa�a um programa que leia o nome de um vendedor, o seu sal�rio fixo e o total de vendas efetuadas por ele no m�s (em dinheiro).
Sabendo que este vendedor ganha 15% de comiss�o sobre suas vendas efetuadas, informar o total a receber no final do m�s, com duas casas decimais.*/

#include<stdio.h>

int main (){

    char nome[15];
    float salr, vendas;

    scanf("%s", nome);
    scanf("%f", &salr);
    scanf("%f", &vendas);

    salr = salr+(0.15*vendas);
    printf("TOTAL = R$ %.2f\n", salr);

    return 0;
}
