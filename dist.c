#include <stdio.h>
#include "ponto.h"
#include "circulo.h"

int main(void)
{
    float x, y, radius;
    scanf("%f %f %f", &x, &y, &radius);
    PONTO *center = ponto_criar(x, y);
    CIRCULO *circle = circulo_criar(center, radius);
    int stop = 0;
    scanf("%i", &stop);
    for (int i = 0 ; i < stop; i++)
    {
        float px, py;
        scanf("%f %f", &px, &py);
        PONTO *p = ponto_criar(px, py);
        float distance = ponto_distancia(p, center);
        if (distance > radius)
        {
            printf("fora\n");
        }
        if (distance == radius)
        {
            printf("no raio\n");
        }
        else
        {
            printf("dentro\n");
        }
    }
}