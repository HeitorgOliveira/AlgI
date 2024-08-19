#include "circulo.h"
#include "ponto.h"
#include <stdlib.h>
#include <stdio.h>

struct circulo_
{
    PONTO *center;
    float radius;
};

CIRCULO *circulo_criar(PONTO *p, float raio)
{
    CIRCULO *circle = (CIRCULO*) calloc(1, sizeof(CIRCULO));
    circle->center = p;
    circle->radius = raio;

    return circle;
}

bool circulo_set_ponto(CIRCULO *c, PONTO *p)
{
    c->center = p;
    return true;
}

bool circulo_set_raio(CIRCULO *c, float raio)
{
    c->radius = raio;
    return true;
}

PONTO *circulo_get_ponto(CIRCULO *c)
{
    return c->center;
}

float circulo_get_raio(CIRCULO *c)
{
    return c->radius;
}

void circulo_apagar(CIRCULO **c)
{
    CIRCULO *circle = *c;
    free(circle->center);
    free(circle);
    circle = NULL;
}
