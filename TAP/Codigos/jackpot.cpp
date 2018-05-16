#include<iostream>

using namespace std;

int main(){

    int num;

    while(cin>>num && num !=0){

        int valor[num+1];

        for(int i=0; i<num; i++){
            cin >> valor[i];
        }

        int i, j, max=0, acumulado=0;
        /*
        for(i=0; i<num; i++){
            for(j=i; j<num; j++){
                acumulado+=valor[i];
                if(acumulado > soma){
                    soma=acumulado;
                }
            }
            acumulado=0;
        }*/


        for(i=0; i< num; i++){
            acumulado+=valor[i];
            if(acumulado>max){
                max=acumulado;
            }else if(acumulado<0){
                acumulado=0;
            }
        }

        if(max > 0){
            cout << "The maximum winning streak is "<<max<<".\n";
        }else{
            cout << "Losing streak.\n";
        }
    }

    return 0;
}
