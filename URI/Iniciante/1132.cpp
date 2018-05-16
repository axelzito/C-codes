/* Escrever um algoritmo que leia 2 valores inteiros X e Y calcule a soma dos números que não são múltiplos de 13 entre X e Y, incluindo ambos.*/

#include<iostream>

using namespace std;

int main(){

    int x, y, soma=0, i, aux;

    cin>>x;
    cin>>y;

    if(y<x){
        swap(x, y);
    }

    for(i=x; i<=y; i++){
        if(i%13!=0){
            soma+=i;
        }
    }

    cout<<soma<<"\n";

    return 0;
}
