#include "Pilha.h"
#include "item.h"
#include <stdatomic.h>
#include <stdlib.h>
#include <stdio.h>

struct pilha
{
    ITEM * item[TAM];
    int tamanho;
};

PILHA *pilha_criar(void)
{
    PILHA *pilha = calloc(1, sizeof(PILHA));
    return pilha;
}

void pilha_apagar(PILHA **pilha)
{
    free(*pilha);
    free(pilha);
}

bool pilha_vazia(PILHA *pilha)
{
    if (pilha->tamanho)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool pilha_cheia(PILHA *pilha)
{
    if (pilha->tamanho == TAM)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int pilha_tamanho(PILHA *pilha)
{
    return pilha->tamanho;
}

ITEM *pilha_topo(PILHA *pilha)
{
    return pilha->item[pilha->tamanho-1];
}

bool pilha_empilhar(PILHA *pilha, ITEM *item)
{
    if (pilha->tamanho == TAM)
    {  
        return false;
    }
    pilha->item[pilha->tamanho++] = item;
    return true;
}

ITEM *pilha_desempilhar(PILHA *pilha)
{
    if (!pilha->tamanho)
    {
        return NULL;
    }
    pilha->tamanho--;
    return pilha->item[pilha->tamanho];
}

void pilha_print(PILHA *p)
{
    for (int i = 0, max = p->tamanho; i < max; i++)
    {
        printf("Índice: %i\nItem: %c\n", i, item_get_chave(p->item[i]));
    }
}

bool balanceada(int a)
{
    printf("Hello?\n");
    // PILHA *p = pilha_criar();
    // int i = 0, a = 0;
    // while(sequencia[i] != '\0')
    // {
    //     printf("%i", a++);
    //     if (sequencia[i] == '(' || sequencia[i] == '{' || sequencia[i] == '[')
    //     {
    //         pilha_empilhar(p, item_criar(sequencia[i]));
    //     }
    //     else if (sequencia[i] == ')')
    //     {
    //         char caracter = item_get_chave(pilha_desempilhar(p));
    //         if (caracter != '(')
    //         {
    //             return false;
    //         }
    //     }
    //     else if (sequencia[i] == '}')
    //     {
    //         char caracter = item_get_chave(pilha_desempilhar(p));
    //         if (caracter != '{')
    //         {
    //             return false;
    //         }
    //     }
    //     else if (sequencia[i] == ']')
    //     {
    //         char caracter = item_get_chave(pilha_desempilhar(p));
    //         if (caracter != '[')
    //         {
    //             return false;
    //         }
    //     }
    // }
    // pilha_apagar(&p);
    // return true;
}