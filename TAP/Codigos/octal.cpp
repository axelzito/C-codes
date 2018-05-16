#include <iostream>

using namespace std;

#include <stdlib.h> // strtol(), system(), ltoa()


int main() {

	char num_str[50];

	while(cin >> num_str){
        long num_l = strtol(num_str, NULL, 2); // conversion : binary(char*) -> decimal(long)
        ltoa (num_l, num_str, 8); // conversion : decimal(long) -> octal(char*)
        cout << num_str << "\n";
    }

	return 0;
}






/*
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){

    char binary[10001], octal[10001];
    long int i=0, j=0;

    while(cin>>binary){

        while(binary[i]){
            binary[i]=binary[i]-48;
            ++i;
        }

        --i;

        while(i-2>=0){
            octal[j++]=binary[i-2]*4+binary[i-1]*2+binary[i];
            i=i-3;
        }

        if(i==1){
            octal[j]=binary[i-1]*2+binary[i];
        }else if(i==0){
            octal[j]=binary[i];
        }else{
            --j;
        }

        while(j>=0){
            cout<<octal[j--];
        }
    }

    cout<<"\n";
    //cout<<octal<<"\n";


    return 0;
}
*/
