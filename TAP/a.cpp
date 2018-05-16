#include<iostream>

#define penny 1
#define shilling 12
#define pound 240


using namespace std;

int main(){
  
  int t;
  cin >> t;
  
  for(int i = 0; i <t; i++){
    
    int num;
    
    cin>>num;
    
  
    cout << "3\n"; 
    
    cout << num/pound << "\n";
    num = num%pound;
    
    cout << num/shilling << "\n";
    num = num%shilling;
    
    cout << num << "\n";
  }


  return 0;
}