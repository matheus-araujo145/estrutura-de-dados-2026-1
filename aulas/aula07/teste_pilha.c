#include <stdio.h>
#include "pilha.h"

int main()
{
    Pilha *p = criar();

    empilhar(p, 1);
    empilhar(p, 8);
    empilhar(p, 0);

    No *no = p->topo;
    emprimir_pilha(p);

    desempilhar(p);

    emprimir_pilha(p);

    empilhar(p,6);

    emprimir_pilha(p);
    
    desempilhar(p);

    emprimir_pilha(p);

    desempilhar(p);

    emprimir_pilha(p);

    return 0;
}
