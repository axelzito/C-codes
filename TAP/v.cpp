#include <iostream>
#include <string>
#include <map>

using namespace std;


int main(){

  int t;
  cin>>t;
  
  for(int k=0; k<t; k++){
    int num;
    cin>>num;
    
    map<string, int> pessoas;
    map<string, int>::iterator it;
    int cont;
    string nome;
    
    for(int i=0; i<num; i++){
      cin>>nome;
      pessoas[nome]++;
    }
    int aux=0;
    for(it = pessoas.begin(); it != pessoas.end(); it++){
     if(it->second>1){ 
       aux++;
     }
    }
    
    cout<<aux<<"\n";
    for(it = pessoas.begin(); it != pessoas.end(); it++){
     if(it->second>1){ 
       cout<<it->first<<" "<<it->second<<"\n";
     }
    }
  }

  return 0;
}