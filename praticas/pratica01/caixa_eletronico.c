#include <stdio.h>

int caixa_eletronico(){

    int valor;
    printf("Valor a ser sacado: ");
    scanf("%d", &valor);

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
    printf("Foram necessarias:\n");
    printf("%d notas de 200: \n", nota200);
    printf("%d notas de 100: \n", nota100);
    printf("%d notas de 50: \n", nota50);
    printf("%d notas de 20: \n", nota20);
    printf("%d notas de 10: \n", nota10);
    printf("%d notas de 5: \n", nota5);
    printf("%d notas de 2: \n", nota2);
    printf("Total de notas: %d\n", nota200 + nota100 + nota50 + nota20 + nota10 + nota5 + nota2);
}

int main()
{
    caixa_eletronico();
    return 0;
}
