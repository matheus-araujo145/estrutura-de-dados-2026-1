#include <stdio.h>
#include <stdlib.h>
#include "arvore_binaria.h"

typedef struct no_t {
    struct no_t *esquerda;
    int valor;
    struct no_t *direita;
} No;

struct arvore_t {
    No *raiz;
};

/* Funções auxiliares */

No *criar_no(int valor) {
    No *novo = (No *) malloc(sizeof(No));

    if (novo != NULL) {
        novo->valor = valor;
        novo->esquerda = NULL;
        novo->direita = NULL;
    }

    return novo;
}

No *inserir_no(No *raiz, int valor) {
    if (raiz == NULL) {
        return criar_no(valor);
    }

    if (valor < raiz->valor) {
        raiz->esquerda = inserir_no(raiz->esquerda, valor);
    } else {
        raiz->direita = inserir_no(raiz->direita, valor);
    }

    return raiz;
}

void pre_ordem(No *raiz) {
    if (raiz != NULL) {
        printf("%d ", raiz->valor);
        pre_ordem(raiz->esquerda);
        pre_ordem(raiz->direita);
    }
}

void em_ordem(No *raiz) {
    if (raiz != NULL) {
        em_ordem(raiz->esquerda);
        printf("%d ", raiz->valor);
        em_ordem(raiz->direita);
    }
}

void pos_ordem(No *raiz) {
    if (raiz != NULL) {
        pos_ordem(raiz->esquerda);
        pos_ordem(raiz->direita);
        printf("%d ", raiz->valor);
    }
}

void destruir_nos(No *raiz) {
    if (raiz != NULL) {
        destruir_nos(raiz->esquerda);
        destruir_nos(raiz->direita);
        free(raiz);
    }
}

/* Implementação do TDA */

Arvore *arvore_criar() {
    Arvore *arvore = (Arvore *) malloc(sizeof(Arvore));

    if (arvore != NULL) {
        arvore->raiz = NULL;
    }

    return arvore;
}

void arvore_inserir(Arvore *arvore, int valor) {
    if (arvore != NULL) {
        arvore->raiz = inserir_no(arvore->raiz, valor);
    }
}

void arvore_exibir_pre_ordem(Arvore *arvore) {
    if (arvore != NULL) {
        pre_ordem(arvore->raiz);
        printf("\n");
    }
}

void arvore_exibir_em_ordem(Arvore *arvore) {
    if (arvore != NULL) {
        em_ordem(arvore->raiz);
        printf("\n");
    }
}

void arvore_exibir_pos_ordem(Arvore *arvore) {
    if (arvore != NULL) {
        pos_ordem(arvore->raiz);
        printf("\n");
    }
}

int arvore_esta_vazia(Arvore *arvore) {
    return (arvore == NULL || arvore->raiz == NULL);
}

void arvore_destruir(Arvore *arvore) {
    if (arvore != NULL) {
        destruir_nos(arvore->raiz);
        free(arvore);
    }
}