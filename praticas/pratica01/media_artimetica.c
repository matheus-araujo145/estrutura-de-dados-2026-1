#include <stdio.h>

float calcular_media(int numeros[], int n){

    if (n <= 0 || n > 100)
    {
        return 0;
    }

    float soma = 0;

    for (int i = 0; i < n; i++)
    {
        soma += numeros[i];
    }

    return soma / n;
}

int main(){

    float media = 0;

    int v1[] = {1,2,3};
    media = calcular_media(v1,0); // n == 0
    printf("v1 = 1 , v2 = 2 , v3 = 3 , n = 0 , Media = %.2f => %i\n", media, media == 0);

    int v2[] = {1,2,3};
    media = calcular_media(v2,-5); // n < 0
    printf("v1 = 1 , v2 = 2 , v3 = 3 , n < 0 , Media = %.2f => %i\n", media, media == 0);

    int v3[] = {1,2,3};
    media = calcular_media(v3,101); // n > 100
    printf("v1 = 1 , v2 = 2 , v3 = 3 , n > 100 , Media = %.2f => %i\n", media, media == 0);

    int v4[] = {10,20,30};
    media = calcular_media(v4,3); // média = 20
    printf("v1 = 10 , v2 = 20 , v3 = 30 , n = 20 , Media = %.2f => %i\n", media, media == 20);

    int v5[] = {5,5,5,5};
    media = calcular_media(v5,4); // média = 5
    printf("v1 = 5 , v2 = 5 , v3 = 5 , n = 5 , Media = %.2f => %i\n", media, media == 5);

    return 0;
}