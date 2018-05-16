#include<iostream>
#include<string>
#include<cctype>

using namespace std;


int main(){
  
  int t;
  cin>>t;
  
  for(int k=0; k<t; k++){
    string code;
    cin>>code;
    char letra;
    
    for(int i=0; i<code.size(); i++){
      if(code[i]=='-'){
	letra=code[i+1];
	letra=toupper(letra);
	cout<<letra;
	i++;
      }else{
	cout<<code[i];
      }
    }
    cout<<"\n";
  }
  
  return 0;
}