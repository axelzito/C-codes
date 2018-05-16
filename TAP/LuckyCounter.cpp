#include<iostream>
#include<string>

using namespace std;

int main(){
  
  int t, k;
  cin>>t;
  
  for(k=0; k<t; k++){
    int n, i, cont=0;
    cin>>n;
    string hora;
    //ab:ab, aa:bb, ab:ba
    for(i=0; i<n; i++){
      cin>>hora;
      //hora[0]=a;
      if(hora[0]==hora[1] && hora[3]==hora[4]){ //aa:bb
	cont++;
      }else if(hora[0]==hora[3] && hora[1]==hora[4]){ //ab:ab
	cont++;
      }else if(hora[0]==hora[4] && hora[1]==hora[3]){ //ab:ba
	cont++;
      }
    }
    cout<<cont<<"\n";
  }
  
  return 0;
}