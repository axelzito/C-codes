#include<iostream>
#include<string>

using namespace std;


int main(){
  
  int t;
  cin>>t;
  
  for(int k=0; k<t; k++){
    string text;
    char aux;
    int cont=0, maior = 1;
    
    cin>>text;
  
    aux = text[0];
    cont = 1;
    
    for(int i=1; i<text.size(); i++){
      if(text[i]== aux){
	cont++;
	if(cont>maior){
	  maior=cont;
	}
      }else{
	cont=1;
	aux = text[i];
      }
    }
    
    cout<<maior<<"\n";
  }
  
  return 0;
}