/* Calcule o consumo m�dio de um autom�vel sendo fornecidos a dist�ncia total percorrida (em Km) e o total de combust�vel gasto (em litros).*/

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
