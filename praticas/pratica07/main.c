#include <stdio.h>
#include "pilha.h"

int main() {

    Pilha *pilha = pilha_criar();

    pilha_empilhar(pilha, 10);
    pilha_empilhar(pilha, 20);
    pilha_empilhar(pilha, 30);
    pilha_empilhar(pilha, 40);

    pilha_exibir(pilha);

    printf("Topo da pilha: %d\n", pilha_topo(pilha));

    printf("Desempilhado: %d\n", pilha_desempilhar(pilha));

    pilha_exibir(pilha);

    printf("Novo topo: %d\n", pilha_topo(pilha));

    pilha_destruir(pilha);

    return 0;
}