/* imposto de renda */



#include<stdio.h>

int main(){

    float renda, imprenda, aux;

    scanf("%f", &renda);

    if(renda>0 && renda<=2000.00){

        printf("Isento\n");

    } else if(renda>=2000.01 && renda<=3000.00){

        renda=renda-2000;

        imprenda=renda*0.08;

        printf("R$ %.2f\n", imprenda);

    } else if(renda>=3000.01 && renda<=4500.00){

        renda=renda-2000;

        imprenda=renda*0.18;

        printf("R$ %.2f\n", imprenda);

    } else if(renda>=4500.01){

        renda=renda-2000;

        imprenda=renda*0.28;

        printf("R$ %.2f\n", imprenda);

    }

    return 0;

}
