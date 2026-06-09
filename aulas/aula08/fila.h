#ifndef FILA_H
#define FILA_H

typedef struct No{

    int dados;
    struct No *proximo;
} No;

typedef struct{

    No* primeiro;
    No* ultimo;
    int quantidade;
} Fila;

Fila *criar();
void destruir(Fila* fila);
void enfileirar(Fila* fila, int valor);
void emprimir_fila(Fila* fila);
void desenfileirar(Fila* fila);
int fila_vazia(Fila* fila);

#endif