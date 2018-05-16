#include<iostream>
#include<string>

using namespace std;


int main(){
  
  int t;
  cin>>t;
  
  for(int k=0; k<t; k++){
    int recipe, package;
    int recipiente[100000], pacote[100000];
    int aux=0;
    
    cin>>recipe;
    for(int i=0; i<recipe; i++){
      cin>>recipiente[i];
    }
    
    cin>>package;
    for(int i=0; i<package; i++){
      cin>>pacote[i];
    }
    
    for(int i=0; i<recipe; i++){
      for(int j=0; j<recipe; j++){
	if(recipiente[i]>=pacote[i]){
	  aux=recipiente[i]-pacote[i];  
	}
	aux+=aux;
      }
    }
    
    cout<<aux<<"\n";
  }
  
  return 0;
}