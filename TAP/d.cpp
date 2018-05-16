#include<iostream>
#include<string>

using namespace std;


int main(){
  
  int t;
  cin>>t;
  
  for(int k=0; k<t; k++){
    
    int larg, alt;
    cin>>larg;
    int l[11000], a[110000];
    string cores;
    
    for(int i=0; i<larg; i++){
      cin>>l[i];    
    }
    l[larg] = 0;
        
    cin>>alt;
    
    for(int i=0; i<alt; i++){
      cin>>a[i];    
    }
    a[alt] = 0;
    
    cin>>cores;
    int red=0, green=0, blue=0, aux;
    
    for(int i=0; i<larg; i++){
      if(cores[i]=='R'){
	aux=(l[i]*a[i])-(l[i+1]*a[i+1]);
	red+=aux;
      }
      if(cores[i]=='G'){
	aux=(l[i]*a[i])-(l[i+1]*a[i+1]);
	green+=aux;
      }
      if(cores[i]=='B'){
	aux=(l[i]*a[i])-(l[i+1]*a[i+1]);
	blue+=aux;
      }   
    }
    
    //cout<<"red: "<<red<<"  blue: "<<blue<<"  green: "<<green<<"\n\n";
    
    if(blue>=red && blue>=green){
      cout<<blue<<"\n";
    }else if(red>=blue && red>=green){
      cout<<red<<"\n";
    }else if(green>=blue && green>=red){
      cout<<green<<"\n";
    }
  }
    
  return 0;
}