#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    for(int z=0; z<t; z++){
        int binary=0, octal=0, decimal=0, i=0;
        cin>>binary;

        while(binary!=0){
            decimal+=(binary%10)*pow(2,i);
            i++;
            binary/=10;
        }

        i=1;

        while(decimal!=0){
            octal+=(decimal%8)*i;
            decimal/=8;
            i*=10;
        }

        cout<<octal<<"\n";
    }

    return 0;
}
