#include <stdio.h>
#include <stdlib.h>
#include "tabela_hash.h"

int calcular_hash(int valor) {  //função interna

    return valor / 3;
}

TabelaHash *criar(int tamanho){

    TabelaHash *tabela = (TabelaHash *)malloc(sizeof(TabelaHash) + sizeof(int) * tamanho);

    if (tabela == NULL){

        return NULL;
    }

    tabela->dados = (No **)malloc(sizeof(No*)*tamanho);
    tabela->quantidade = 0;
    tabela->tamanho = tamanho;

    return tabela;
}

void destruir(TabelaHash *tabela_hash){

    free(tabela_hash->dados);
    free(tabela_hash);
}

void inserir(TabelaHash *tabela_hash, int valor){

    int hash = calcular_hash(valor);

    No *no = (No *)malloc(sizeof(No));
    no->dado = valor;
    no->proximo = NULL;
    
    tabela_hash -> dados[hash] = valor;
    tabela_hash -> quantidade++;


}

int buscar(TabelaHash *tabela_hash, int valor){

    int hash = calcular_hash(valor);

    if (tabela_hash->dados[hash] == valor){

        return hash;
    }
    
    return -1;
}

void remover(TabelaHash *tabela_hash, int valor){

    int achei = buscar(tabela_hash, valor);

    if (achei < 0){

        return;
    }

    No *no = tabela_hash->dados[achei];
    No *anterior = tabela_hash->dados[achei];
    while (no != NULL){

        if (no->dado == valor){

            anterior = no->proximo;
            return;
        }
        anterior = no;
        no = no->proximo;
        
    }
    tabela_hash->quantidade--;
}

int tabela_vazia(TabelaHash *tabela_hash){

    return tabela_hash != NULL && tabela_hash->quantidade == 0;
}   