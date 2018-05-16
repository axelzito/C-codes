#include <iostream>
#include <string>

using namespace std;

int main(){

  int t, k;
  cin>>t;
  
  for(k=0; k<t; k++){
    int k,n, v[1000];
    cin>>k>>n;
    
    for(int i=0; i<k; i++){
      cin>>v[i];
    }
    
    for(int j=0; j<n; j++){
      for(int i=0; i<k; i++){
	if(i<k-1){
	  v[i]=v[i+1]-v[i];
	}
      }
      k--;
    }
    
    for(int i=0; i<k; i++){
      if(i<k-1){
	cout<<v[i]<<" ";
      }else if(i==k-1){
	cout<<v[i];
      }
    }
    
    cout<<"\n";
  }

  return 0;
}