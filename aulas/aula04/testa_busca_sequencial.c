#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"selecao.h"

#define tamanho 10000000LL //Para tamanho > 4 milhões, precisa mudar para long int

int main(){
    
    int vetor[tamanho];
    srand(time(NULL));

    for (long long int i = 0; i < tamanho; i++){ //Muda para long int

        vetor[i] = rand() % tamanho;
        printf("%lli, ",vetor[i]);
    }
    printf("\n");
    printf("Primeiro: %lli , ultimo: %lli\n",vetor[0], vetor[tamanho - 1]);

    long long int valor;
    printf("Entre com um numero para buscar ");
    scanf("%lli", &valor);

    clock_t inicio = clock();
    long long int achou = busca_sequencial(vetor, tamanho, valor);
    clock_t termino = clock();

    float duracao = (float)(termino - inicio) / CLOCKS_PER_SEC;

    printf("A busca pelo valor %lli resultou em %lli\n", valor, achou);
    printf("Demorou %fs para achar\n", duracao);

    return 0;
}
