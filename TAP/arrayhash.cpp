#include <iostream>
#include <string>

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  
  int t, num, aux, z, i, testes;
  string letters;
  int sum=0;
 
  cin>>testes;
 
  for(int k=0; k<testes; k++){
    cin>>t;
    for(z=0; z<t; z++){
      cin>>letters;
      for(i=0; i<letters.size(); i++){
	int asc = letters[i]-65;
	aux=asc+z+i;
	sum+=aux;
      }
    }
    cout<<sum<<"\n";
    sum=0;
  }
  
  return 0;
}