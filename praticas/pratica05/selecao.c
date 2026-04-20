#include "selecao.h"

void troca(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

int linear_search(int v[], int n, int k){

    for(int i = 0; i <= k; i++){

        int menor = i;

        for(int j = i + 1; j < n; j++){

            if(v[j] < v[menor])
                menor = j;
        }

        troca(&v[i], &v[menor]);
    }

    return v[k];
}

int particionar(int v[], int inicio, int fim){

    int pivo = v[fim];
    int i = inicio;

    for(int j = inicio; j < fim; j++){

        if(v[j] <= pivo){

            troca(&v[i], &v[j]);
            i++;
        }
    }

    troca(&v[i], &v[fim]);

    return i;
}

int quick_select(int v[], int inicio, int fim, int k){

    if(inicio <= fim){

        int pivo = particionar(v, inicio, fim);

        if(pivo == k)
            return v[pivo];

        else if(k < pivo)
            return quick_select(v, inicio, pivo - 1, k);

        else
            return quick_select(v, pivo + 1, fim, k);
    }

    return -1;
}