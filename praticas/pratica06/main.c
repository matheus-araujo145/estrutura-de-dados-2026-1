#include <stdio.h>
#include "lista_linear.h"

int main(){

    ListaEncadeada *lista = criar();

    adicionar_final(lista, 10);
    adicionar_final(lista, 20);
    adicionar_final(lista, 30);

    exibir(lista);

    No *resultado = buscar(lista, 20);

    if(resultado != NULL){

        printf("Valor encontrado: %d\n", resultado->dado);
    }

    remover(lista, 20);

    exibir(lista);

    destruir(lista);

    return 0;
}