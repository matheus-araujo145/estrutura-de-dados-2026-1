#ifndef selecao_h
#define selecao_h

int linear_search(int v[], int n, int k);
int quick_select(int v[], int inicio, int fim, int k);

void troca(int *a, int *b);
int particionar(int v[], int inicio, int fim);

#endif