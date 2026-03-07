#include <stdio.h>

void media_aritmetica(){

    int n;
    printf("Quantos numeros: ");
    scanf("%d", &n);

    if (n > 100 || n <= 0)
    {
        return;
    }
    
    float media = 0;

    for (int i = 0; i < n; i++)
    {
        int numero;
        printf("Digite um numero: ");
        scanf("%d", &numero);
        media += numero;
    }
    printf("Media aritmetica: %.2f\n", media/n);
}

int main()
{
    media_aritmetica();
    return 0;
}
