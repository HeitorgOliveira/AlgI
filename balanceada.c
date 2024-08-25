#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"
#include "item.h"

bool balanceada(char *sequencia)
{
     PILHA *p = pilha_criar();
     int i = 0;
     while(sequencia[i] != '\0')
     {
         if (sequencia[i] == '(' || sequencia[i] == '{' || sequencia[i] == '[')
         {
            void *teste;
            pilha_empilhar(p, item_criar(sequencia[i], teste));
         }
         else if (sequencia[i] == ')')
         {
             char caracter = item_get_chave(pilha_desempilhar(p));
             if (caracter != '(')
             {
                 return false;
             }
         }
         else if (sequencia[i] == '}')
         {
             char caracter = item_get_chave(pilha_desempilhar(p));
             if (caracter != '{')
             {
                 return false;
             }
         }
         else if (sequencia[i] == ']')
         {
             char caracter = item_get_chave(pilha_desempilhar(p));
             if (caracter != '[')
             {
                 return false;
             }
         }
         i++;
     }
     if (!pilha_vazia(p))
     {
        return false;
     }
    pilha_apagar(&p);
     return true;
}
