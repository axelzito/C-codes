#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	char palavra[99];
	char PETER1[] = ".#.", WENDY1[] = ".*.",PETER2[] = "#.#", WENDY2[] = "*.*" ,PETER3[] = "#.", WENDY3[] = "*.";
	int t=0, i=0, tam=0, j=0, k=0, a=0, b=0, c=0, d=0, e=0, f=0, x=0, tam2=0;
	int botao=0;

	cin >> t;

	for(i=0; i<t; i++) {
		botao = 0;
		k = 0;
		cin >> palavra;
		tam = strlen(palavra);
		if(tam == 2) {
			x=1;
			tam2=tam+1;
			a=0;
		}
		else {
			tam2=tam;
			a=1;
			x=0;
		}
		if(tam == 5) {
			b=30;
		}
		else
			b=4;
		if(tam == 8) {
			c=30;
		}
		else
			c=7;
		if(tam == 11)
			d=30;
		else
			d=10;
		if(tam == 14)
			e=30;
		else
			e=13;
		cout << ".";
		for(j=x; j<tam2; j++) {
			cout << PETER1;
			cout << ".";
			if((j==a)||(j==b)||(j==c)||(j==d)||(j==e)||(j==16)) {
				cout << WENDY1;
				cout << ".";
				j++;
			}
		}
		cout << "\n.";
		for(j=x; j<tam2; j++) {
			cout << PETER2;
			cout << ".";
			if((j==a)||(j==b)||(j==c)||(j==d)||(j==e)||(j==16))	{
				cout << WENDY2;
				cout << ".";
				j++;
			}
		}
		cout << "\n";
		for(j=x; j<tam2; j++)	{
			if(botao == 0)
				cout << PETER3;
			else
				cout << ".";
			cout << palavra[k];
			cout << ".";
			botao = 0;
			k++;
			if((j==a)||(j==b)||(j==c)||(j==d)||(j==e)||(j==16))	{
				cout << WENDY3;
				cout << palavra[k];
				cout << ".*";
				j++;
				k++;
				botao = 1;
			}
			if((botao == 0)&&((j+1)==tam2))
				cout << "#";
			}
			cout << "\n.";
			for(j=x; j<tam2; j++) {
				cout << PETER2;
				cout << ".";
				if((j==a)||(j==b)||(j==c)||(j==d)||(j==e)||(j==16)) {
					cout << WENDY2;
					cout << ".";
					j++;
				}
			}
			cout << "\n.";
			for(j=x; j<tam2; j++)	{
				cout << PETER1;
				cout << ".";
				if((j==a)||(j==b)||(j==c)||(j==d)||(j==e)||(j==16)) {
					cout << WENDY1;
					cout << ".";
					j++;
				}
			}
			cout << "\n";
		}
	return 0;
}
