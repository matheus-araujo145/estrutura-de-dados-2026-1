#include<stdio.h>
#include<string.h>
#include "agenda.h"

int main(){ //Precisa compilar o main.c e o agenda.c

    Agenda agenda = criar_agenda(10);

    Contato contato;
    strcpy(contato.nome, "Jose");
    strcpy(contato.telefone, "11111-1111");

    adicionar_contato(&agenda, contato);

    listar_contatos(&agenda);

    Contato outro;
    strcpy(outro.nome, "Maria");
    strcpy(outro.telefone, "22222-2222");

    adicionar_contato(&agenda, outro);
    listar_contatos(&agenda);

    return 0;
}
