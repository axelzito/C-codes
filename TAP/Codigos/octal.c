#include<stdio.h>
//#include <iostream>

//using namespace std;

#include <stdlib.h> // strtol(), system(), ltoa()


int main() {

	char num_str[50];

	scanf("%c", num_str);
        long num_l = strtol(num_str, NULL, 2); // conversion : binary(char*) -> decimal(long)
        ltoa (num_l, num_str, 8); // conversion : decimal(long) -> octal(char*)
        //cout << num_str << "\n";
        printf("%ld", num_str);


	return 0;
}


