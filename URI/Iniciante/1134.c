/* Um Posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes. 
 * Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma: 
 * 1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a 4) 
 * deve ser solicitado um novo código (até que seja válido). 
 * O programa será encerrado quando o código informado for o número 4. */

#include<stdio.h>

int main(){
	
	int op=0, alcool=0, gasolina=0, diesel=0;
	
	for(; ;){
		scanf("%d", &op);
		if(op<1 || op>4){
			scanf("%d", &op);
		}
		if(op==1){
			alcool++;
		}
		if(op==2){
			gasolina++;
		}
		if(op==3){
			diesel++;
		}
		if(op==4){
			break;
		}
	}
	
	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gasolina, diesel);
	
	return 0;
}
