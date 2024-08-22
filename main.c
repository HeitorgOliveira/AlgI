#include <stdio.h>
#include "Pilha.h"

int main(void)
{
    int a;
    scanf("%i", &a);
    getchar();
    for(int i = 0; i < a; i++)
    {
        char letras[1000];
        scanf("%s", letras);
        printf("Avaliando a sequencia...\n");
        if (balanceada(1))
        {
            printf("BALANCEADA\n");
        }
        else
        {
            printf("NÃO BALANCEADA\n");
        }
    }
}