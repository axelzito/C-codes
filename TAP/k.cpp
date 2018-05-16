#include <iostream> 
#include <map> 
#include<vector>
using namespace std;

int main(){
  
  int t;
  cin>>t;
  
  for(int k=0; k<t; k++){
    int tam, cont;
    cin>>tam;
    int nota;
    
    map<int, int> turma;
    map<int, int> :: iterator it;
    
    for(int i=0; i<tam; i++){
      turma[nota]=0; 
    }
    
    for(int i=0; i<tam; i++){
     cin>>nota;
     turma[nota]++; 
    }
    
    int aux = 0, maior=0;
    vector<int> v;
    for(it=turma.begin(); it!=turma.end(); it++){
      aux = it->second;
      if(aux > maior){
	maior = aux;
	v.clear();
	v.push_back(it->first);
      }else if(aux == maior){
	v.push_back(it->first);
      }
    }
    
    cout<<v.size()<<"\n";
    for(int i=0; i<v.size(); i++){
      cout<<v[i]<<"\n";
    }
  }
  
  return 0;
}