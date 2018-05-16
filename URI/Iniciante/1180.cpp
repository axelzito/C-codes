/* Faça um programa que leia um valor N. Este N será o tamanho de um vetor X[N].
 A seguir, leia cada um dos valores de X, encontre o menor elemento deste vetor e a sua posição dentro do vetor, mostrando esta informação. */

#include <iostream>
using namespace std;

int main(){

    int i, n, aux=0, pos=0;

    cin>>n;

    int x[n];

    for(i=0; i<n; i++){
        cin>>x[i];
    }

    for(i=0; i<n; i++){
        if(x[i]<aux){
            aux=x[i];
            pos=i+1;
        }
    }

    cout<<"Menor valor: "<< aux <<"\n" <<"Posicao: " << pos-1 << "\n";

    return 0;
}
