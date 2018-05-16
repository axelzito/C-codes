#include <iostream>
#include <string>

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  
  int testes;
  cin>>testes;
 
  for(int k=0; k<testes; k++){
    int dir[1001], esq[1001];
    int num, num2, status=0, sum=0;
    cin>>num;
    for(int i=0; i<num; i++){
      cin>>dir[i];
    }
    cin>>num2;
    for(int i=0; i<num; i++){
      cin>>esq[i]; 
    }
    
    for(int i=0; i<num; i++){
      status=0;
      for(int j=0; j<num2; j++){
	if(dir[j]!=0){
	  if(dir[j]==esq[i]){
	    status=1;
	    dir[j]=0;
	    break;
	  }
	}
      }
      if(status==0){
	sum++;
      }
    }
    cout<<sum<<"\n";
  }
  
  return 0;
}