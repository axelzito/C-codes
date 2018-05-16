/*Neste problema deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2,
o valor unitário de cada peça 2 e calcula e mostra o valor a ser pago.*/

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
