#include<stdio.h>
#include "ordenacao.h"

void troca(int *a,int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int v[], int n){          //O(n²)

    for(int i = 0 ; i < n-1; i++){         //percorre o vetor n-1 vezes
            
        for(int j = i+1; j < n; j++){      //faz as comparações n-1 vezes
            
            if(v[i] > v[j]){               //faz as trocas
                          
                troca(&v[i], &v[j]);
            }
        }
    }
}

void imprimir_vetor(int v[], int n) {

    printf("[");
    for(int i=0; i < n-1; i++){

        printf("%i, ", v[i]);
    }

    printf("%i]\n", v[n-1]);
}

void selection_sort(int v[], int n){       //O(n²)

    for(int i = 0; i < n-1; i++){          //percorre o vetor n-1 vezes

        int menor = i;                     //guarda o índice do menor elemento

        for(int j = i+1; j < n; j++){      //faz as comparações n-1 vezes

            if(v[j] < v[menor]){           //atualiza o índice do menor elemento
                menor = j;
            }
        }

        troca(&v[i], &v[menor]);           //faz a troca
    }
}

int particionar_vetor(int v[], int inicio, int fim){ 

    int pivo = v[fim];                     //escolhe o fim como pivô
    int i = inicio - 1;                    //indice do menor elemento
    for (int j = inicio; j < fim; j++){

        if(v[j] <= pivo) {                 //se o elemento for menor que o pivô coloca pra tras
            i++;
            troca(&v[i], &v[j]);
        }
    }
    
    troca(&v[i + 1], &v[fim]);
    return i + 1;
}

void quick_sort(int v[], int inicio, int fim){ // O(n log n)

    if (inicio < fim){
        
        int p = particionar_vetor(v, inicio, fim);
        quick_sort(v, inicio, p - 1);
        quick_sort(v, p + 1, fim);
    }
}
