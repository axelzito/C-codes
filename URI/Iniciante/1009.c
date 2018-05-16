/*Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro).
Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês, com duas casas decimais.*/

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
