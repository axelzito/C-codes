/* Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km) e o total de combustível gasto (em litros).*/

#include <stdio.h>

int main(){

    int dis;
    float lit, consumo;

    scanf("%d", &dis);
    scanf("%f", &lit);

    consumo = dis/lit;

    printf("%.3f km/l\n", consumo);

    return 0;
}
