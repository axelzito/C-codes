//#include <stdio.h>
//#include <string.h>
#include<iostream>
#include<string>

using namespace std;

int main() {

    string valor[50];
    char tmp;
    int cont, valor_i, valor_c=0, op_menu, r_div, i, cont2;
    int t;

    cin >> t;
                          // Decimal to Binary....
    for(int z=0; z<t; z++){
        printf("\nInsert the number you want to convert: ");
        scanf("%d", &valor_i);
        cont=0;
        i=0;

        while (i!=1){

            r_div=valor_i/2;

            if (r_div<2){
                i=1;
                if (valor_i%2==0){
                    valor[cont]='0';
                }else{
                    valor[cont]='1';
                }
                if (r_div==0){
                    valor[cont+1]='0';
                }else{
                    valor[cont+1]='1';
                }
                valor[cont+2]='\0';
            }else{
                if (valor_i%2==0){
                    valor[cont]= '0';
                }
            }else{
                valor[cont]= '1';
            }
        }
        cont++;
        valor_i=r_div;

        cont2=strlen(valor)-1;
        for (cont=0; cont==cont2||cont<cont2; cont++){
            tmp=valor[cont];
            valor[cont]=valor[cont2];
            valor[cont2]=tmp;
            cont2--;
        }

        printf("\n%s", valor);

      //Binary to Decimal
      //***********************************************************************

        printf("Insert the number you want to convert: ");
        scanf("%s", &valor);
        for (cont=0; cont<strlen(valor); cont++){
            if (valor[cont]=='1'){
                valor_c=valor_c+pow(2, strlen(valor)-(cont+1));
            }
            if (valor[cont]!='1'&&valor[cont]!='0'){
                printf("\nInvalid Values!");
                cont=strlen(valor); //Ending the loop...
            }
        }

        printf("%d", valor_c);
        fflush(stdin);
        getch();
        break;
      //***********************************************************************
    }

    return 0;
}

