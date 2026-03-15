#include <stdio.h>

struct Saque {
    int nota200;
    int nota100;
    int nota50;
    int nota20;
    int nota10;
    int nota5;
    int nota2;
};

struct Saque caixa_eletronico(int valor){

    struct Saque resultado = {0,0,0,0,0,0,0};

    if (valor > 1000 || valor <= 0)
    {
        return resultado;
    }

    while (valor >= 2)
    {
        if (valor >= 200)
        {
            resultado.nota200++;
            valor -= 200;
        }
        else if (valor >= 100)
        {
            resultado.nota100++;
            valor -= 100;
        }
        else if (valor >= 50)
        {
            resultado.nota50++;
            valor -= 50;
        }
        else if (valor >= 20)
        {
            resultado.nota20++;
            valor -= 20;
        }
        else if (valor >= 10)
        {
            resultado.nota10++;
            valor -= 10;
        }
        else if (valor >= 5)
        {
            resultado.nota5++;
            valor -= 5;
        }
        else
        {
            resultado.nota2++;
            valor -= 2;
        }
    }

    return resultado;
}

int main(){

    struct Saque valor;

    valor = caixa_eletronico(-1000); //Teste com valor < 0

    printf("Teste com valor < 0\n");
    printf("200: %d\n", valor.nota200);
    printf("100: %d\n", valor.nota100);
    printf("50: %d\n", valor.nota50);
    printf("20: %d\n", valor.nota20);
    printf("10: %d\n", valor.nota10);
    printf("5: %d\n", valor.nota5);
    printf("2: %d\n", valor.nota2);

    valor = caixa_eletronico(1234); //Teste com valor > 1000
    printf("Teste com valor > 1000 (1234):\n");
    printf("200: %d\n", valor.nota200);
    printf("100: %d\n", valor.nota100);
    printf("50: %d\n", valor.nota50);
    printf("20: %d\n", valor.nota20);
    printf("10: %d\n", valor.nota10);
    printf("5: %d\n", valor.nota5);
    printf("2: %d\n", valor.nota2);

    valor = caixa_eletronico(786); //Teste com valor válido
    printf("Teste com valor válido (786):\n");
    printf("200: %d\n", valor.nota200);
    printf("100: %d\n", valor.nota100);
    printf("50: %d\n", valor.nota50);
    printf("20: %d\n", valor.nota20);
    printf("10: %d\n", valor.nota10);
    printf("5: %d\n", valor.nota5);
    printf("2: %d\n", valor.nota2);

    return 0;
}
