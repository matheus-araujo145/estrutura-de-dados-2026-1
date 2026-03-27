#ifndef agenda_h
#define agenda_h

#define limite 100

typedef struct contato_t{

    char nome[101];
    char telefone[20];
} Contato;

typedef struct agenda_t{

    Contato contatos[limite];
    int tamanho;
    int quantidade;
} Agenda;

Agenda criar_agenda(int tamanho);
void adicionar_contato(Agenda *agenda, Contato contato);
void remover_contato(Agenda *agenda, char nome[]);
void bloquear_contato(Agenda *agenda, char nome[]);
void editar_contato(Agenda *agenda, char nome[], Contato novo_contato);
void listar_contatos(Agenda *agenda);

#endif
