#include<iostream>
#include<string>

using namespace std;

int main(){
  
  int t, k;
  cin>>t;
  
  for(k=0; k<t; k++){
    int i, n, cont=0;
    int lis[100];
    cin>>n;
    
    for(i=0; i<n; i++){
      cin>>lis[i];
    }
    
    for(i=0; i<n-1; i++){
      if(lis[i]>=lis[i+1]){
	cont++;
      }
    }
    /*
    if(cont==0){
      cont=1;
    }*/
    
    cout<<cont+1<<"\n";
  }
  
  return 0;
}