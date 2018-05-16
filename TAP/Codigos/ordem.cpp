#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	
	int t, x, y, z, i, numeros[3], j;
	char a, b, c;
	
	cin >> t;
	
	for (i=0; i<t; i++){
		
		for(j=0; j<3; j++){
			cin >> numeros[j];
		}
		std::sort(numeros, numeros+3);
		
		x = numeros[0];
		y = numeros[1];
		z = numeros[2];
		
		cin >> a >> b >> c;
		
		if(a=='A' && b=='B' && c=='C'){
			cout<<x<<' '<<y<<' '<<z<<'\n';
		}else if(a=='A' && b=='C' && c=='B'){
			cout<<x<<' '<<z<<' '<<y<<'\n';
		}else if(a=='B' && b=='A' && c=='C'){
			cout<<y<<' '<<x<<' '<<z<<'\n';
		}else if(a=='B' && b=='C' && c=='A'){
			cout<<y<<' '<<z<<' '<<x<<'\n';
		}else if(a=='C' && b=='A' && c=='B'){
			cout<<z<<' '<<x<<' '<<y<<'\n';
		}else if(a=='C' && b=='B' && c=='A'){
			cout<<z<<' '<<y<<' '<<x<<'\n';
		}
	}
}
