/*Neste problema deve-se ler o c�digo de uma pe�a 1, o n�mero de pe�as 1, o valor unit�rio de cada pe�a 1, o c�digo de uma pe�a 2, o n�mero de pe�as 2,
o valor unit�rio de cada pe�a 2 e calcula e mostra o valor a ser pago.*/

#include <stdio.h>

int main (){

    int cod, n, cod2, n2;
    float preco, preco2, total;

    scanf("%d %d %f", &cod, &n, &preco);
    scanf("%d %d %f", &cod2, &n2, &preco2);

    preco = n * preco;
    preco2 = n2 * preco2;
    total = preco + preco2;
    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}
