#include <iostream>
#include <string>

using namespace std;

int main () {
	
	string alfabeto;
	string traducao;
	string buffer;
	int i, j;
	
	//cin >> alfabeto;
	//cin >> traducao;
	getline(cin, alfabeto);
	getline(cin, traducao);
	
	cout << traducao << endl;
	cout << alfabeto << endl;
	
	while(getline(cin, buffer)){
		if(buffer == "-1"){
			cout << endl;
			getline(cin, alfabeto);
			getline(cin, traducao);
			
			cout << traducao << endl;
			cout << alfabeto << endl;
			getline(cin, buffer);
		}
		for(i=0; i<buffer.size(); i++){
			for(j=0; j<alfabeto.size(); j++){
				if(buffer[i] == alfabeto[j]){
					buffer[i] = traducao[j];
					break;
				}
			}
		}
		cout << buffer << endl;		
	}
	
	return 0;
}
