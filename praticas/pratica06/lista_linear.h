#ifndef LISTA_LINEAR_H
#define LISTA_LINEAR_H

typedef struct no {
    int dado;
    struct no *proximo;
} No;

typedef struct {
    No *primeiro;
    No *ultimo;
    int quantidade;
} ListaEncadeada;

/* operações */
ListaEncadeada *criar();

void destruir(ListaEncadeada *lista);

void adicionar_final(ListaEncadeada *lista, int valor);

int lista_vazia(ListaEncadeada *lista);

No *buscar(ListaEncadeada *lista, int valor);

void remover(ListaEncadeada *lista, int valor);

void exibir(ListaEncadeada *lista);

#endif