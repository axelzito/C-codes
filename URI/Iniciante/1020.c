/* Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias.

Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias.
*/

#include<stdio.h>

int main(){
	
	int n, aux, ano, mes, dia;
	
	scanf("%d", &n);
	
	aux = n%365;
    ano = (n - aux) / 365;
    mes = (aux - aux%30) / 30;
    dia = aux%30;
    
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
	
	return 0;
}
