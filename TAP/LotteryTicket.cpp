#include <iostream>
#include <string>

using namespace std;

int main(){

  int t, k;
  cin>>t;
  
  for(k=0; k<t; k++){
    int preco, b1, b2, b3, b4;
    cin>>preco>>b1>>b2>>b3>>b4;
    string POSSIBLE="POSSIBLE";
    string IMPOSSIBLE="IMPOSSIBLE";
    
    if((b1+b2+b3+b4)==preco){
      cout<<POSSIBLE<<"\n";
    }else if((b1+b2+b3)==preco){
      cout<<POSSIBLE<<"\n";  
    }else if((b1+b2+b4)==preco){
      cout<<POSSIBLE<<"\n";
    }else if((b1+b3+b4)==preco){
      cout<<POSSIBLE<<"\n";
    }else if((b1+b2)==preco){
      cout<<POSSIBLE<<"\n";
    }else if((b1+b3)==preco){
      cout<<POSSIBLE<<"\n";
    }else if((b1+b4)==preco){
      cout<<POSSIBLE<<"\n";
    }else if(b1==preco){
      cout<<POSSIBLE<<"\n";
    }else if((b2+b3+b4)==preco){
      cout<<POSSIBLE<<"\n";
    }else if((b2+b3)==preco){
      cout<<POSSIBLE<<"\n";
    }else if((b2+b4)==preco){
      cout<<POSSIBLE<<"\n";
    }else if(b2==preco){
      cout<<POSSIBLE<<"\n";
    }else if((b3+b4)==preco){
      cout<<POSSIBLE<<"\n";
    }else if(b3==preco){
      cout<<POSSIBLE<<"\n";
    }else if(b4==preco){
      cout<<POSSIBLE<<"\n";
    }else{
      cout<<IMPOSSIBLE<<"\n";
    }
  }

  return 0;
}