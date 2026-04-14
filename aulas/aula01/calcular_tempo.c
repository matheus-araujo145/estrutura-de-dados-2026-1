#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Ligar cronometro
    clock_t tempo_inicial = clock();

    // O(1)
    int soma = 10 + 20;

    //Desligar cronometro
    clock_t tempo_final = clock();

    double duracao = (double) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;

    printf("Tempo de execução: %.10f seg\n", duracao);

    int n = 10000;
    tempo_inicial = clock();

    // O(n)
    for (int i = 0; i < n; i++){

        soma += 1;
    }

    tempo_final = clock();

    duracao = (double) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;

    printf("Tempo de execução: %.10f seg\n", duracao);

    tempo_inicial = clock();

    n = 10000;
    // O(n^2)
    for (long long i = 0; i < n; i++){

        for (long long j = 0; j < n; j++)
        {
            soma += 1;
        }
        
    }

    tempo_final = clock();

    duracao = (double) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;

    printf("Tempo de execução: %.10f seg\n", duracao);

    return 0;
}
