#include <iostream>
#include <string>

using namespace std;

int main(){

    int t;
    cin>>t;

    for(int k=0; k<t; k++){
        int i, tam, num=0, soma=0, flag=0;
        string s;
        cin>>tam;
        cin.ignore();

        for(int j=0; j<tam; j++){

            getline(cin, s);
            //cin.ignore();

			if(flag==0){
				if(s=="LEFT"){
					num=((num-90)+360)%360;
				}else if(s=="RIGHT"){
					num=(num+90)%360;
				}else if(s=="TURN AROUND"){
					num=(num+180)%360;
				}else if(s=="HALT"){
					flag++;
				}else if(s[0]=='L'){
				    soma = 0;
					for(i=5; i<s.size(); i++){
						soma*=10;
						soma+=s[i] - '0';
					}
					num=((num-soma)+360)%360;
				}else if(s[0]=='R'){
				    soma = 0;
					for(i=6; i<s.size(); i++){
						soma*=10;
						soma+=s[i] - '0';
					}
					num=(num+soma)%360;
				}
			}
        }

    	cout<<num<<"\n";
    }

    return 0;
}
