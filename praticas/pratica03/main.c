#include<stdio.h>
#include<stdlib.h>
#include "conta.h"

int main(){
    
    Conta *conta = conta_criar(123,0);
    conta_depositar(conta, 100.0);
    conta_ver_saldo(conta);
    conta_sacar(conta, 30.0);
    conta_ver_saldo(conta);
    conta_destruir(conta);

    return 0;
}
