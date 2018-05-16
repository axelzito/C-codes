#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	int t, i, anoes[9], j, z, k, y, u, aux=0;

	cin >> t;

	for (i=0; i<t; i++){

		for(j=0; j<9; j++){
			cin >> anoes[j];
		}

        aux=0;
		for(z=0; z<9; z++){
			aux+=anoes[z];
		}

        aux = aux-100;

        //std::sort(anoes, anoes+9);

        for(u=0; u<9; u++) {
			for(k=0; k<9; k++) {
				if((anoes[u]+anoes[k] == aux) && (u!=k)) {
					anoes[u] = -1;
					anoes[k] = -1;
					break;
				}
			}
		}

        std::sort(anoes, anoes+9);
		for(y=0; y<9; y++){
            if(anoes[y]!= -1){
                cout<<anoes[y]<<"\n";
            }
		}
	}

	return 0;
}
