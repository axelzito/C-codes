#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    // A - 65   Z - 90

    int t, z;

    cin >> t;

    for(z=0; z<t; z++){
        string key, msg;
        int i, j;
        int aux, diferencia;
        char c;

        cin >> key;
        cin.ignore();
        getline(cin, msg);

        j=0;
        for(i=0; i < msg.size(); i++){

            //cout<<"Posição: "<<i<<" >> ";
            c=msg[i];
            //cout<<"\nPosição: "<<i<<" letra original >> " <<c;
            //char d=key[j];
            //cout<<"\nPosição: "<<i<<" letra KEY >> " <<d;

            if(msg[i] > 64 && msg[i] < 91){
                aux = key[j]-65;

                if(msg[i]+aux > 90){
                    diferencia=msg[i]+(aux-90);
                    msg[i]=65+diferencia-1;
                    c = msg[i];
                    //cout<<"\nPosição: "<<i<<" letra traduzida >> " <<c;
                    cout<<c;
                }else{
                    c=msg[i]+aux;
                    //cout<<"\nPosição: "<<i<<" letra traduzida >> " <<c;
                    cout<<c;
                }
                j++;
                if(j == key.size()){
                    j = 0;
                }
            }
        }
        cout<<"\n";
    }

    return 0;
}
