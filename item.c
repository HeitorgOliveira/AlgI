#include <stdlib.h>
#include <stdio.h>
#include "item.h"

struct item_
{
    char tipo;
};

ITEM * item_criar(char chave)
{
    ITEM * item = calloc(1, sizeof(ITEM));
    if (chave == '(')
    {
        item->tipo = '(';
    }
    else if (chave == '{')
    {
        item->tipo = '{';
    }
    else if(chave == '[')
    {
        item->tipo = '[';
    }
    else
    {
        return item;
    }
    return item;
}

bool item_apagar(ITEM **item)
{
    ITEM * temp = *item;
    free(temp);
    temp = NULL;
    free(item);
    item = NULL;
    return true;
}

void item_imprimir(ITEM *item)
{
    printf("Tipo: %c\n", item->tipo);
}

char item_get_chave(ITEM *item)
{
    return item->tipo;
}

bool item_set_chave(ITEM *item, char chave)
{
    if (item == NULL)
    {
        return false;
    }
    else
    {
        item->tipo = chave;
        return true;
    }
}