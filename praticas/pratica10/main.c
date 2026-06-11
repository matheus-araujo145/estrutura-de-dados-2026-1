#include <stdio.h>
#include "tabela_hash.h"

int main() {

    TabelaHash *hash = hash_criar(10);

    if (hash_esta_vazia(hash)) {
        printf("Tabela hash vazia.\n\n");
    }

    hash_inserir(hash, 15);
    hash_inserir(hash, 25);
    hash_inserir(hash, 35);
    hash_inserir(hash, 7);
    hash_inserir(hash, 18);
    hash_inserir(hash, 42);

    printf("Tabela apos insercoes:\n");
    hash_exibir(hash);

    printf("\n");

    if (hash_buscar(hash, 25)) {
        printf("Valor 25 encontrado.\n");
    } else {
        printf("Valor 25 nao encontrado.\n");
    }

    if (hash_buscar(hash, 99)) {
        printf("Valor 99 encontrado.\n");
    } else {
        printf("Valor 99 nao encontrado.\n");
    }

    if (hash_remover(hash, 25)) {
        printf("Valor removido com sucesso.\n");
    } else {
        printf("Valor nao encontrado.\n");
    }

    printf("\nTabela apos remocao:\n");
    hash_exibir(hash);

    hash_destruir(hash);

    return 0;
}