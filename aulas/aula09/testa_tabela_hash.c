#include <stdio.h>
#include <stdlib.h>
#include "tabela_hash.h"

int main(int argc, char const *argv[]){

    TabelaHash *tabela = criar(10);

    inserir(tabela, 12);
    inserir(tabela, 5);
    inserir(tabela, 7);
    inserir(tabela, 1);

    printf("Tabela tem %i elementos:\n", tabela->quantidade);

    for (int i = 0; i < tabela->tamanho; i++){

        printf("[%d] -> %i\n", i, tabela->dados[i]);
    }

    printf("Procure o valor 12 na tabela:\n");
    int achei = buscar(tabela, 12);
    if (achei < 0){

        printf("Não achou\n");
    }else{

        printf("Achei na posição %i\n", achei);
    }
    
    printf("Procure o valor 21 na tabela\n");
    achei = buscar(tabela, 21);

    if (achei < 0){

        printf("Não achou\n");
    }else{

        printf("Achei na posição %i\n", achei);
    }

    remover(tabela, 5);

    printf("Tabela tem %i elementos:\n", tabela->quantidade);

    for (int i = 0; i < tabela->tamanho; i++){

        printf("[%d] -> %i\n", i, tabela->dados[i]);
    }
    
    return 0;
}
