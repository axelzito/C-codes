#include<iostream>
#include<algorithm>

using namespace std;

int main(){

  int t;
  cin >> t;
  
  for(int k=0; k<t; k++){
    int num;
    cin>>num;
    int valor[num];
    
    for(int i=0; i<num; i++){
      valor[i]=-1;
      cin>>valor[i];
    }
    
    sort(valor, valor+num);
    
    for(int i=0; i<num; i++){
      if(valor[i]==valor[i+1]){
	valor[i]=99999999;
      }
    }
    
    sort(valor, valor+num);
    /*
    for(int i=0; i<num; i++){
      cout<<valor[i]<<" ";
    }*/
    
    int count = 0;
    for(int i=0; i<num; i++){
      if(valor[i]!= -1){
	count++;
      }
      if(count==3 && valor[i]!=99999999){
	cout<<valor[i]<<"\n";
	count=-1;
	break;	
      }/*else if(count==3 && valor[i]==99999999){
	cout<<"-1\n";
      }*/
    }
    
    if(count!=-1){
      cout<<"-1\n";
    }
  }

  return 0;
}