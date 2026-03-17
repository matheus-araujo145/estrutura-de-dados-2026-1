#include <stdio.h>

int fatorial_recursivo(int n){

    if (n < 0)
    {
        return 0;
    }
    
    else if(n == 0){
        return 1;
    }
    return n * fatorial_recursivo(n-1);
}

int fatorial_iterativo(int n){

    if (n < 0)
    {
        return 0;
    }
    
    int resultado = 1;
    for (int i = 1; i <= n; i++)
    {
        resultado *= i;
    }
    
    return resultado;
}

int main()
{
    int numero = -1;
    
    printf("Fatorial de %d (recursivo): %d => %i\n", numero, fatorial_recursivo(numero), fatorial_recursivo(numero) == 0);
    printf("Fatorial de %d (iterativo): %d => %i\n", numero, fatorial_iterativo(numero), fatorial_iterativo(numero) == 0);

    numero = 0;
    printf("Fatorial de %d (recursivo): %d => %i\n", numero, fatorial_recursivo(numero), fatorial_recursivo(numero) == 1);
    printf("Fatorial de %d (iterativo): %d => %i\n", numero, fatorial_iterativo(numero), fatorial_iterativo(numero) == 1);

    numero = 5;
    printf("Fatorial de %d (recursivo): %d => %i\n", numero, fatorial_recursivo(numero), fatorial_recursivo(numero) == 120);
    printf("Fatorial de %d (iterativo): %d => %i\n", numero, fatorial_iterativo(numero), fatorial_iterativo(numero) == 120);

    return 0;
}
