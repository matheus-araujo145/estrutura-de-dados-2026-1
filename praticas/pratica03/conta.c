#include<stdio.h>
#include<stdlib.h>
#include "conta.h"

Conta *conta_criar(int numero, float saldo){

    Conta *conta = (Conta *) malloc(sizeof(Conta));
    if (conta == NULL) {
        printf("Erro ao criar conta!\n");
        return NULL;
    }
    conta->numero = numero;
    conta->saldo = saldo;
    return conta;
}

void conta_depositar(Conta *conta, float valor){

    conta -> saldo += valor;
    printf("Depósito realizado com sucesso!\n");
}

void conta_sacar(Conta *conta, float valor){

    if (valor > conta -> saldo)
    {
        printf("Saldo insuficiente!\n");
        return;
    }

    conta -> saldo -= valor;
    printf("Saque realizado com sucesso!\n");
}

void conta_ver_saldo(Conta *conta){

    printf("Saldo: %.2f\n", conta -> saldo);
}

void conta_destruir(Conta *conta){

    free(conta);
    printf("Conta fechada!\n");
}
