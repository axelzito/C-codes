
#include<iostream>

using namespace std;

int main(){

	int i, n;
	double x, y, div=0;

	cin>>n;
	for(i=0; i<n; i++){
		cin>> x >> y;
		if(y==0){
			cout << "divisao impossivel\n";
		}else{
			div=x/y;
			cout<< div << "\n";
		}
	}

	return 0;
}
