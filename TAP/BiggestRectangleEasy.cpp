//BiggestRectangleEasy 

#include <iostream>
#include <string>
#include <map>

using namespace std;


int main(){

  int t;
  cin>>t;
  
  for(int k=0; k<t; k++){
    int num, larg=0, alt=0;
    
    cin>>num;
    
    /*larg=(num/4)+1;
    alt=(num/4);
    int result;
    result=alt*larg;
    cout<<result<<"\n";*/  
  
    while(num>=2){
      larg++;
      num-=2;
      if(num>=2){
	alt++;
	num-=2;
      }
    }
    cout<<alt*larg<<"\n";
  }
  
  return 0;
}