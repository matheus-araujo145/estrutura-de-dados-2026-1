#include"selecao.h"

#define tamanho 10

int busca_sequencial(int v[], int n, int valor){

    for(int i = 0; i < n; i++){ // O(n)

        if (v[i] == valor){

            return i;
        }
    }
    return -1;
}
