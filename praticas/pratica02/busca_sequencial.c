#include <stdio.h>
#include <time.h>

int busca_sequencial(int vetor[], int tamanho, int valor){
    for (int i = 0; i < tamanho; i++){
        if (vetor[i] == valor){
            return i;
        }
    }
    return -1;
}

int main(){
    
    int vetor[100];
    
    clock_t tempo_inicial, tempo_final;
    double duracao;

    for (int i = 0; i < 100; i++){
        vetor[i] = i;
    }

    // Melhor caso (primeira posição)
    int valor = 0;
    printf("Melhor caso:\n");
    tempo_inicial = clock();
    int resultado = busca_sequencial(vetor, 100, valor);
    tempo_final = clock();
    duracao = (double)(tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("Busca por %d: %d\n", valor, resultado);
    printf("Duração: %.10f seg\n\n", duracao);

    // Caso médio (meio do vetor)
    valor = 50;
    printf("Caso medio:\n");
    tempo_inicial = clock();
    resultado = busca_sequencial(vetor, 100, valor);
    tempo_final = clock();
    duracao = (double)(tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("Busca por %d: %d\n", valor, resultado);
    printf("Duração: %.10f seg\n\n", duracao);

    // Pior caso (última posição)
    valor = 99;
    printf("Pior caso (ultimo elemento):\n");
    tempo_inicial = clock();
    resultado = busca_sequencial(vetor, 100, valor);
    tempo_final = clock();
    duracao = (double)(tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("Busca por %d: %d\n", valor, resultado);
    printf("Duração: %.10f seg\n\n", duracao);

    // Pior caso (não encontrado)
    valor = -1;
    printf("Pior caso (nao encontrado):\n");
    tempo_inicial = clock();
    resultado = busca_sequencial(vetor, 100, valor);
    tempo_final = clock();
    duracao = (double)(tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("Busca por %d: %d\n", valor, resultado);
    printf("Duração: %.10f seg\n\n", duracao);

    return 0;
}