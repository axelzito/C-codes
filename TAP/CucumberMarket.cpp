#include <iostream>
#include <string>
#include<algorithm>
#include<functional>

using namespace std;

int main(){

  int t, k;
  cin>>t;
  
  for(k=0; k<t; k++){
    //k o tanto que ele quer, n o tanto de diferente, preço preço, dinheiro o tanto de dinehiros q ele tem
    int n, dinheiro, k, preco[100], flag=0, aux=0, ieie=1;
    cin>>n>>dinheiro>>k;
    
    for(int i=0; i<n; i++){
      cin>>preco[i];
    }
    
    sort(preco, preco+n, greater<int>());
    
    for(int i=0; i<k; i++){
      aux+=preco[i];
    }
    
    if(dinheiro>=aux){
      cout<<"YES"<<"\n";
    }else{
      cout<<"NO"<<"\n";
    }
  }

  return 0;
}