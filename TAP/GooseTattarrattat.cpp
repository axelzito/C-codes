#include<iostream>
#include<string>

using namespace std;

int main(){
  
  int t, k;
  cin>>t;
  
  for(k=0; k<t; k++){
    string palavra;
    int cont=0, maior=0;
    cin>>palavra;
    for(int i=0; i<palavra.size(); i++){
      for(int j=0; j<palavra.size(); j++){
	if(palavra[i]==palavra[j]){
	  cont++;
	}
      }
      if(cont>maior){
	  maior=cont;
      }
      cont=0;
    }
    cout<<palavra.size()-maior<<"\n";
  }
  
  return 0;
}
