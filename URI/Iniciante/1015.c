/*Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a dist�ncia entre eles,
mostrando 4 casas decimais ap�s a v�rgula, segundo a f�rmula: D�=(Xb-Xa)�+(Yb-Ya)� */

#include<stdio.h>
#include<math.h>

int main() {

    int x1, x2, y1, y2;
    float res;

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);

    res = sqrt(((pow((x2-x1), 2)) + (pow((y2-y1), 2))));

    printf("%.4f\n", res);

    return 0;
}
