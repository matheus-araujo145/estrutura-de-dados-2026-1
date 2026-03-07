#include <stdio.h>

void potencia()
{

    int pt = 1;
    int base,expoente;
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    if (expoente < 0 || base <= 0)
    {
        return;
    }
    for (int i = 0; i < expoente; i++)
    {
        pt *= base;
    }
    printf("%d elevado a %d = %d\n", base, expoente, pt);
}

int main()
{
    potencia();

    return 0;
}
