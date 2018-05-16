#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

/* 0 consists of 6 dashes,
 * 1 consists of 2 dashes,
 * 2 consists of 5 dashes,
 * 3 consists of 5 dashes,
 * 4 consists of 4 dashes,
 * 5 consists of 5 dashes, 
 * 6 consists of 6 dashes,
 * 7 consists of 3 dashes,
 * 8 consists of 7 dashes,
 * 9 consists of 6 dashes.
 */
int main(){

  int t;
  cin >> t;
  
  for(int k=0; k<t; k++){
  
    string num;
    cin>>num;
    
    int cont=0;
    int aux;
    
    for(int i = 0; i<num.size(); i++){
      if(num[i]=='0'){
	aux=6;
	cont+=aux;
      }
      if(num[i]=='1'){
	aux=2;
	cont+=aux;
      }
      if(num[i]=='2'){
	aux=5;
	cont+=aux;
      }
      if(num[i]=='3'){
	aux=5;
	cont+=aux;
      }
      if(num[i]=='4'){
	aux=4;
	cont+=aux;
      }
      if(num[i]=='5'){
	aux=5;
	cont+=aux;
      }
      if(num[i]=='6'){
	aux=6;
	cont+=aux;
      }
      if(num[i]=='7'){
	aux=3;
	cont+=aux;
      }
      if(num[i]=='8'){
	aux=7;
	cont+=aux;
      }
      if(num[i]=='9'){
	aux=6;
	cont+=aux;
      }
    }
    cout<<cont<<"\n";
  }
  
  return 0;
}