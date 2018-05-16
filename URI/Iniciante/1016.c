/* Dois carros (X e Y) partem em uma mesma direção.
O carro X sai com velocidade constante de 60 Km/h e o carro Y sai com velocidade constante de 90 Km/h.
Leia a distância (em Km) e calcule quanto tempo leva (em minutos) para o carro Y tomar essa distância do outro carro.*/

#include<stdio.h>

int main(){

    int dis, x, y;
    float min, min2;

    scanf("%d", &dis);

    min = dis/60;
    min2 = dis/90;

    printf("%f minutos, %f \n", min, min2);

    return 0;
}
