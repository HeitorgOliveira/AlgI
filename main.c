#include "circulo.h"
#include "ponto.h"
#include <stdio.h>

int main(void)
{
    float x, y, radius;
    scanf("%f", &x);
    scanf("%f", &y);
    PONTO *point = ponto_criar(x, y);
    ponto_print(point);
    printf("\n");
    scanf("%f", &x);
    scanf("%f", &y);
    ponto_set(point, x, y);
    scanf("%f", &radius);
    CIRCULO *circle = circulo_criar(point, radius);
    printf("Circulo:Centro(%.1f,%.1f)", ponto_get_x(point), ponto_get_y(point));
    printf(", Raio = %.1f\n", circulo_get_raio(circle));
    ponto_apagar(&point);
    circulo_apagar(&circle);
}