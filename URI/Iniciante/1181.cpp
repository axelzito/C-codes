/* Neste problema você deve ler um número, indicando uma linha da matriz na qual uma operação deve ser realizada, um caractere maiúsculo,
indicando a operação que será realizada, e todos os elementos de uma matriz M[12][12].
Em seguida, calcule e mostre a soma ou a média dos elementos que estão na área verde da matriz, conforme for o caso.
A imagem abaixo ilustra o caso da entrada do valor 2 para a linha da matriz, demonstrando os elementos que deverão ser considerados na operação. */

#include <iostream>
#include<string>
#define MAX 3

using namespace std;

int main(){

    int i, j, linha, mat[MAX][MAX], soma=0, media=0, count=0;
    char x;

    cin>> linha;
    cin>>x;

    for(i=0; i<MAX; i++){
        for(j=0; j<MAX; j++){
            cin>>mat[i][j];
        }
    }

    for(i=0; i<MAX; i++){
        for(j=0; j<MAX; j++){
            if(j==linha){
                soma+=mat[i][j];
                //count++;
            }
        }
    }

    if(x=='S'){
        cout<<soma<<"\n";
    }

    if(x='M'){
        media=(soma/MAX);
        cout<<media<<"\n";
    }

    return 0;
}
