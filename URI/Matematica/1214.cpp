/* Sabe-se que 90% dos calouros tem sempre a espectativa de serem acima da média no início 
de suas graduações. Você deve checar a realidade para ver se isso procede.

Entrada
A entrada contém muitos casos de teste. A primeira linha da entrada contém um inteiro integer C, 
indicando o número de casos te teste. Seguem C casos de teste ou instâncias. 
Cada caso de teste inicia com um inteiro N, que é o número de pessoas de uma turma (1 ≤ N ≤ 1000).
Seguem N inteiros, separados por espaços, cada um indicando a média final
(um inteiro entre 0 e 100) de cada um dos estudantes desta turma.

Saída
Para cada caso de teste imprima uma linha dando o percentual de estudantes que estão acima
da média da turma, com o valor arredondado e com 3 casas decimais. */

#include <iostream>

using namespace std;

int main(){
	
	int c, n, i, j;
	double nota, media=0;
	
	cin >> c;
	
	for(i=1; i<c; i++){
		
		cin >> n;
		for(j=1; j<n; j++){
			cin>>nota;
			media+=nota;
		}
		
	}
	
	return 0;
}
