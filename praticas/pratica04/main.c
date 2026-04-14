#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ordenacao.h"

#define TAMANHO 100

int main(){

    int vetor_base[TAMANHO];
    int v1[TAMANHO], v2[TAMANHO], v3[TAMANHO];

    for(int i = 0; i < TAMANHO; i++)
    {
        vetor_base[i] = rand() % 1000;
    }

    // copia para os outros para manter mesmos valores e ordens base
    for(int i = 0; i < TAMANHO; i++)
    {
        v1[i] = vetor_base[i];
        v2[i] = vetor_base[i];
        v3[i] = vetor_base[i];
    }

    clock_t inicio, termino;
    float duracao;

    // Bubble Sort
    inicio = clock();
    bubble_sort(v1, TAMANHO);
    termino = clock();
    duracao = (float)(termino - inicio) / CLOCKS_PER_SEC;
    printf("Bubble Sort: %f segundos\n", duracao);

    // Selection Sort
    inicio = clock();
    selection_sort(v2, TAMANHO);
    termino = clock();
    duracao = (float)(termino - inicio) / CLOCKS_PER_SEC;
    printf("Selection Sort: %f segundos\n", duracao);

    // Quick Sort
    inicio = clock();
    quick_sort(v3, 0, TAMANHO - 1);
    termino = clock();
    duracao = (float)(termino - inicio) / CLOCKS_PER_SEC;
    printf("Quick Sort: %f segundos\n", duracao);

    return 0;
}
