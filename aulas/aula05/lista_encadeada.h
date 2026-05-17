#ifndef lista_encadeada_h
#define lista_encadeada_h

typedef struct {
    int dado;
    No *proximo;
} No;

typedef struct {
    No *primeiro;
    No *ultimo;
    int quantidade;
} ListaEncadeada;

ListaEncadeada *criar();
void destruir(ListaEncadeada *lista);
void adicionar_final(ListaEncadeada *lista, int valor);
int lista_vazia(ListaEncadeada *lista);
No *buscar(ListaEncadeada *lista, int valor);  //sequencial
void remover(ListaEncadeada *lista, int valor);

#endif