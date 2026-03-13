#include <stdio.h>

int caixa_eletronico(int valor){

    if (valor > 1000 || valor <= 0)
    {
        return 0;
    }

    int nota200 = 0;
    int nota100 = 0;
    int nota50 = 0;
    int nota20 = 0;
    int nota10 = 0;
    int nota5 = 0;
    int nota2 = 0;

    while (valor >= 2)
    {
        if (valor >= 200)
        {
            nota200++;
            valor -= 200;
        }
        else if (valor >= 100)
        {
            nota100++;
            valor -= 100;
        }
        else if (valor >= 50)
        {
            nota50++;
            valor -= 50;
        }
        else if (valor >= 20)
        {
            nota20++;
            valor -= 20;
        }
        else if (valor >= 10)
        {
            nota10++;
            valor -= 10;
        }
        else if (valor >= 5)
        {
            nota5++;
            valor -= 5;
        }
        else if (valor >= 2)
        {
            nota2++;
            valor -= 2;
        }
    }

    return nota200 + nota100 + nota50 + nota20 + nota10 + nota5 + nota2;
}

int main(){

    int notas = 0;

    notas = caixa_eletronico(-50); // valor < 0
    printf("Valor = -50 => %i\n", notas == 0);

    notas = caixa_eletronico(0); // valor == 0
    printf("Valor = 0 => %i\n", notas == 0);

    notas = caixa_eletronico(1500); // valor > 1000
    printf("Valor = 1500 => %i\n", notas == 0);

    notas = caixa_eletronico(200); // 1 nota
    printf("Valor = 200 -> Notas = %d => %i\n", notas, notas == 1);

    notas = caixa_eletronico(380); // 200+100+50+20+10
    printf("Valor = 380 -> Notas = %d => %i\n", notas, notas == 5);

    notas = caixa_eletronico(7); // 5+2
    printf("Valor = 7 -> Notas = %d => %i\n", notas, notas == 2);

    return 0;
}