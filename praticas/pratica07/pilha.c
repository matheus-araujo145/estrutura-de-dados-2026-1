#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

typedef struct no_t {
    int valor;
    struct no_t *proximo;
} No;

struct pilha_t {
    No *topo;
};

Pilha* pilha_criar() {
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));

    if (p != NULL) {
        p->topo = NULL;
    }

    return p;
}

void pilha_empilhar(Pilha *p, int valor) {
    No *novo = (No*) malloc(sizeof(No));

    if (novo == NULL)
        return;

    novo->valor = valor;
    novo->proximo = p->topo;
    p->topo = novo;
}

int pilha_esta_vazia(Pilha *p) {
    return p->topo == NULL;
}

int pilha_desempilhar(Pilha *p) {
    if (pilha_esta_vazia(p)) {
        printf("Pilha vazia!\n");
        return -1;
    }

    No *aux = p->topo;
    int valor = aux->valor;

    p->topo = aux->proximo;

    free(aux);

    return valor;
}

int pilha_topo(Pilha *p) {
    if (pilha_esta_vazia(p)) {
        printf("Pilha vazia!\n");
        return -1;
    }

    return p->topo->valor;
}

void pilha_exibir(Pilha *p) {
    No *atual = p->topo;

    printf("Topo -> ");

    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->proximo;
    }

    printf("\n");
}

void pilha_destruir(Pilha *p) {
    while (!pilha_esta_vazia(p)) {
        pilha_desempilhar(p);
    }

    free(p);
}