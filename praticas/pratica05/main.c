#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "selecao.h"

#define tamanho 100

int main(){
    
    int v1[tamanho], v2[tamanho];
    int k = 49;

    srand(time(NULL));

    for(int i = 0; i < tamanho; i++){

        v1[i] = rand() % 1000;
        v2[i] = v1[i];
    }

    // Linear Search
    clock_t inicio = clock();

    int resultado1 = linear_search(v1, tamanho, k);

    clock_t termino = clock();

    double duracao = ((double)(termino - inicio)) / CLOCKS_PER_SEC;

    printf("Linear Search:\n");
    printf("%dº menor elemento = %d\n", k+1, resultado1);
    printf("Tempo = %f segundos\n\n", duracao);

    // Quick Select
    inicio = clock();

    int resultado2 = quick_select(v2, 0, tamanho - 1, k);

    termino = clock();

    duracao = ((double)(termino - inicio)) / CLOCKS_PER_SEC;

    printf("Quick Select:\n");
    printf("%dº menor elemento = %d\n", k+1, resultado2);
    printf("Tempo = %f segundos\n", duracao);

    return 0;
}