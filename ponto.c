#include "ponto.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct ponto_
{
    float x;
    float y;
};

PONTO *ponto_criar(float x, float y)
{
    PONTO *point = (PONTO *) calloc(1, sizeof(PONTO));
    point->x = x;
    point->y = y;
    return point;
}

void ponto_apagar(PONTO **p)
{
    free(*p);
    *p = NULL;
}

bool ponto_set(PONTO *p, float x, float y)
{
    p->x = x;
    p->y = y;
    return true;
}

float ponto_get_x(PONTO *p)
{
    return p->x;
}

float ponto_get_y(PONTO *p)
{
    return p->y;
}

void ponto_print(PONTO *p)
{
    printf("Ponto:(%.1f,%.1f)", p->x, p->y);
}

float ponto_distancia(PONTO *pa, PONTO *pb)
{
    float dist = sqrt(pow(pa->x - pb->x, 2) + pow(pa->y - pb->y, 2));
    return dist;
}