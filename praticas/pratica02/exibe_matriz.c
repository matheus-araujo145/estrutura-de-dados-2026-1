#include <stdio.h>
#include <time.h>

void exibir_duplo(int m[10][10]){

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    
}

void exibir_unico(int m[10][10]){

    for (int i = 0; i < 100; i++)
    {
        printf("%d ", m[i / 10][i % 10]);
        if ((i + 1) % 10 == 0){

            printf("\n");
        }
        
    }
    
}

int main()
{
    int matriz[10][10];

    int valor_atual = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = valor_atual++;
        }
    }

    clock_t tempo_inicial, tempo_final;
    double duracao;

    //Teste com dois laços
    tempo_inicial = clock();
    exibir_duplo(matriz);
    tempo_final = clock();
    duracao = (double)(tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("\nDuração matriz 10x10 em dois laços: %.10f\n", duracao);

    //Teste com um laço
    tempo_inicial = clock();
    exibir_unico(matriz);
    tempo_final = clock();
    duracao = (double)(tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("\nDuração matriz 10x10 com um laço: %.10f\n", duracao);

    return 0;
}
