/* Leia dois valores inteiros M e N indefinidamente. 
 * A cada leitura, calcule e escreva a soma dos fatoriais de cada um dos valores lidos. 
 * Utilize uma variável apropriada, pois cálculo pode resultar em um valor com mais de 15 dígitos. */

#include <iostream>

using namespace std;

int main(){
	
	long long n=0, m=0, i;
	long long fatn=1, fatm=1, res;
			
	while(cin>>n>>m){
		
	
		for(i=n; i>1; i--){
			fatn*=i;
		}
		
		for(i=m; i>1; i--){
			fatm*=i;
		}
		
		res=fatn+fatm;
		
		fatn=1;
		fatm=1;
		
		cout<<res<<"\n";	
	}

	return 0;
}
