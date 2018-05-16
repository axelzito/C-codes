#include <stdio.h>

int count=0;

void preenche(int vetor[]){
    int i;

	for(i = 0; i < 10; i++) {
        vetor[i]= -1;
	}
}

void finder(int n, int distinct[]) {

	int i;

	for(i = 0; i < 10; i++) {
		if(distinct[i] == n)
			return;
		if(distinct[i] == -1){
			distinct[i] = n;
			count++;
			return;
		}
	}
}

int main (){

    int t, num, mod, i, j, x, cont=0, vet[10];

    scanf("%d", &t);

    for(i=0; i < t; i++){
        preenche(vet);
        count = 0;
        for(j=0; j < 10; j++){
            scanf("%d", &num);
            mod = num%42;
            finder(mod, vet);
            //mod=0;
        }
        printf("%d\n", count);
        //count=0; // tentei com ele aqui
    }
    //count=0;  //e aqui
    return 0;
}
