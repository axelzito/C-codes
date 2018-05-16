#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){

  int t;
  cin >> t;
  
  for(int k=0; k<t; k++){
    string msg;
    int i;
    int aux, diferencia;
    char c;
    
    cin >> msg;
    //cin.ignore();
    int cod;
    cin >> cod;
    //cin.ignore();
    
    for(i=0; i<msg.size(); i++){
      c=msg[i];
      
      aux=msg[i]-cod;
      if(aux < 65){
	//diferencia=(aux-65)+91;
        
	diferencia=aux+26;
	c = diferencia;
	
	cout<<c;
      }else{
	c=aux;
	cout<<c;
      }
    }
    cout<<"\n";
  }
  
  return 0;
 }