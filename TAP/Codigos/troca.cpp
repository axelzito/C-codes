#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    int a, b;

    while(cin>> a >> b && a !=0 && b !=0){
        int vetA[a+1], vetB[b+1];
        int aux[1000];
        int cont=0;

        for(int i=0; i<a; i++){
            cin>>vetA[i];
        }

        for(int i=0; i<b; i++){
            cin>>vetB[i];
        }

        sort(vetA, vetA+a);
        sort(vetB, vetB+b);

        for(int i=0; i<a; i++){
            for(int j=i; j<b; j++){
                if(vetA[i]==vetB[j]){
                    aux[i]=0;
                }else if((vetA[i]!=vetB[j]) && (vetA[i]== vetA[i+1])&&(vetB[j]== vetB[j+1])){
                    aux[i]=0;
                }else if((vetA[i]!=vetB[j])){
                    aux[i]=1;
                }
                /*
                if(vetA[i+1]==vetB[j+1]){
                    aux[i]==0;
                }*/
            }
        }

        for(int i=0; i<(a+b+1); i++){
            if(aux[i]==1){
                cont++;
            }
        }
        /*
        for(int i=0; i<a; i++){
            for(int j=0; j<b; j++){
                if((vetA[i]!=vetB[j]) && i!=j){
                   if(a<b && cont==a){
                        break;
                   }else if(b<a && cont==b){
                        break;
                   }
                   cont++;
                }
            }
        }*/
        cout<<cont<<"\n";

    }

    return 0;
}
