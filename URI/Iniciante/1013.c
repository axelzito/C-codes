/*Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula: */

#include<stdio.h>

int main(){

    int a, b ,c;

    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c){
        printf("%d eh o maior\n", a);
    }

    if(b > a && b > c){
        printf("%d eh o maior\n", b);
    }

    if(c > b && a < c){
        printf("%d eh o maior\n", c);
    }

    return 0;
}
