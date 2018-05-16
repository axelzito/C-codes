#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    int t, k;
    cin>>t;

    for(k=0; k<t; k++){

        /*string frase;
        char atual;
        int num, cont=0, flag=1;
        cin>>num;

        for(int i=0; i<num; i++){
            cin>>frase;
            transform(frase.begin(), frase.end(), frase.begin(), ::tolower);
            if(i==0){
                atual=frase.begin()[0];
                //cout<<"atual "<<atual<<"\n\n";
            }else if(i>0){
                if(flag!=1){
                    if(frase[0]==atual){
                        cont++;
                        flag=1;
                    }
                }
            }else if(frase[0]!=atual){
                atual=frase[0];
                flag=0;
            }
        }*/


        /*for(int i=1; i<num; i++){
            if(flag!=0){
                if(atual==frase[0]){
                    cont++;
                    flag=0;
                }
            }else{

            }
        }

        cout<<cont<<"\n";*/


        vector <string> words;
        int ret = 0;
        bool flg = false;
        string s;
        int num;
        cin>>num;

        for(int i=0; i<num; i++){
            cin>>s;
            words.push_back(s);
        }
        char c = words[0][0];

        for (int i=1; i<words.size(); i++){
            char cc = words[i][0];
            if (c  == cc || c - 'a' == cc - 'A' || c - 'A' == cc - 'a')
              flg = true;
            else{
                if (flg)
                  ret++;
                flg = false;
            }
            c = cc;
        }

        if (flg)
          ret++;

        cout<<ret<<"\n";
    }

    return 0;
}
