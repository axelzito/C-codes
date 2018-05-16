/* Leia 3 valores de ponto flutuante (A,B e C) e ordene-os em ordem decrescente, de modo que o
 * lado A representa o maior dos 3 lados.
A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:
se A > B+C, apresente a mensagem: NAO FORMA TRIANGULO
se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES */

#include<stdio.h>

int main(){

    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    //fazer o sort aqui pra ordenar
	if(a<b && a<c && b<c){
		a=a;  b=b; c=c;
		//printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", a, b, c, a, b, c);
	}
	
	if(a<b && a<c && c<b){
		a=a; c=b; b=c;
		//printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", a, c, b, a, b, c);
	}
	
	if(b<a && b<c && a<c){
		b=a; a=b; c=c;
		//printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", b, a, c, a, b, c);
	}
	
	if(b<a && c<a && b<c){
		b=a; c=b; a=c;
		//printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", b, c, a, a, b, c);
	}
	
	if(c<b && c<a && b<a){
		c=a; b=b; a=c;
		//printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", c, b, a, a, b, c);
	}
	
	if(c<b && c<a && a<b){
		c=a; a=b; b=c;
		//printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", c, a, b, a, b, c);
	}
	

    if(a>(b+c)){
        printf("NAO FORMA TRIANGULO\n");
    }else{
        if((a*a)==((b*b)+(c*c))){
            printf("TRIANGULO RETANGULO\n");
        }
        if(a*a>(b*b)+(c*c)){
            printf("TRIANGULO OBSTANGULO\n");
        }
        if(a*a<(b*b)+(c*c)){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(a==b && b==c && a==c){
            printf("TRIANGULO EQUILATERO\n");
        }
        if(a==b||a==c||b==c){
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
