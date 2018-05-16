#include <iostream>
#include <vector>

using namespace std;

typedef struct axel{
	
	int d;
	int e;
} bota;

int main(){
	
	vector <bota> marota(100);
	int n, num, cont=0;
	char pe;
	
	while(cin >> n){
		
		cont = 0;
		
		for(int i=30; i<=60; i++){
			marota[i].d = 0;
			marota[i].e = 0;
		}
		
		for(int i=0; i<n; i++){
			cin >> num;
			cin.ignore();
			cin >> pe;
			
			if(pe == 'D'){
				marota[num].d++;
			}else{
				marota[num].e++;
			}
		}
		
		for(int i=30; i<=60; i++){
			if(marota[i].d !=0){
				if(marota[i].d > marota[i].e){
					cont+= marota[i].e;
				}else{
					cont += marota[i].d;
				}
			}
		}
		cout << cont << "\n";	
	}	
		
	return 0;	
}
