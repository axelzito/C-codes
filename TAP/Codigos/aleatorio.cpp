#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){

    int num;

    while(cin>>num && num!=0){
        int aux, aux2;
        int contaDigitos=0;

        aux=num*num;
        aux2=aux;

        if (aux2 == 0){
            contaDigitos = 1;
        }else{
            while(aux2 != 0){
               contaDigitos = contaDigitos + 1;
               aux2 = aux2 / 10;
            }
        }

        cout << contaDigitos << "\n\n" << num << "\n\n"<<aux;

        /*if(contaDigitos<8){

        }*/


    }

    return 0;
}
