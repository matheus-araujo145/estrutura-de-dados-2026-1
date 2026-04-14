#ifndef conta_h
#define conta_h

typedef struct conta_t
{
    int numero;
    float saldo;
} Conta;

Conta *conta_criar(int numero, float saldo);
void conta_depositar(Conta *conta, float valor);
void conta_sacar(Conta *conta, float valor);
void conta_ver_saldo(Conta *conta);
void conta_destruir(Conta *conta);

#endif