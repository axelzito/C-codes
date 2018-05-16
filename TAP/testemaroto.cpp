#include <iostream>
#include <string>

using namespace std;

int main(){

    int t;
    cin>>t;

    for(int k=0; k<t; k++){
        int tam, num=0, soma=0;
        string s;
        cin>>tam;
        cin.ignore();

        for(int j=0; j<tam; j++){

            getline(cin, s);
            //cin.ignore();

            if(s[0]=='L'){
                for(int i=5; i<s.size(); i++){
                    soma*=10;
                    soma+=s[i] - '0';
                }
                cout<<"soma: "<<soma<<"\n";
                num=((num-soma)+360)%360;
            }

        }

    cout<<num<<"\n";
    }

    return 0;
}
