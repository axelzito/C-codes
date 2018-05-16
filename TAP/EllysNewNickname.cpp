#include<iostream>
#include<string>

using namespace std;

int main(){
  
  int t, k;
  cin>>t;
  
  for(k=0; k<t; k++){
    int i, cont=0;
    string nome;
    cin>>nome;
    
    for(i=0; i<nome.size(); i++){
    
      if((nome[i]=='a' && nome[i+1]=='a') || (nome[i]=='a' && nome[i+1]=='e') || (nome[i]=='a' && nome[i+1]=='i') || (nome[i]=='a' && nome[i+1]=='o') || (nome[i]=='a' && nome[i+1]=='u') || (nome[i]=='a' && nome[i+1]=='y')){
	cont++;
      }else if((nome[i]=='e' && nome[i+1]=='a') || (nome[i]=='e' && nome[i+1]=='e') || (nome[i]=='e' && nome[i+1]=='i') || (nome[i]=='e' && nome[i+1]=='o') || (nome[i]=='e' && nome[i+1]=='u') || (nome[i]=='e' && nome[i+1]=='y')){
	cont++;
      }else if((nome[i]=='i' && nome[i+1]=='a') || (nome[i]=='i' && nome[i+1]=='e') || (nome[i]=='i' && nome[i+1]=='i') || (nome[i]=='i' && nome[i+1]=='o') || (nome[i]=='i' && nome[i+1]=='u') || (nome[i]=='i' && nome[i+1]=='y')){
	cont++;
      }else if((nome[i]=='o' && nome[i+1]=='a') || (nome[i]=='o' && nome[i+1]=='e') || (nome[i]=='o' && nome[i+1]=='i') || (nome[i]=='o' && nome[i+1]=='o') || (nome[i]=='o' && nome[i+1]=='u') || (nome[i]=='o' && nome[i+1]=='y')){
	cont++;
      }else if((nome[i]=='u' && nome[i+1]=='a') || (nome[i]=='u' && nome[i+1]=='e') || (nome[i]=='u' && nome[i+1]=='i') || (nome[i]=='u' && nome[i+1]=='o') || (nome[i]=='u' && nome[i+1]=='u') || (nome[i]=='u' && nome[i+1]=='y')){
	cont++;
      }else if((nome[i]=='y' && nome[i+1]=='a') || (nome[i]=='y' && nome[i+1]=='e') || (nome[i]=='y' && nome[i+1]=='i') || (nome[i]=='y' && nome[i+1]=='o') || (nome[i]=='y' && nome[i+1]=='u') || (nome[i]=='y' && nome[i+1]=='y')){
	cont++;
      }
    }
    cout<<nome.size()-cont<<"\n";
  }
  
  return 0;
}