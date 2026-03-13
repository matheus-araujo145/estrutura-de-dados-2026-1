#include <stdio.h>

int calcular_potencia(int base, int expoente){

    int pt = 1;
    
    if (expoente < 0 || base <= 0)
    {
        return 0;
    }
    for (int i = 0; i < expoente; i++)
    {
        pt *= base;
    }
    return pt;
}

int main(){

    float potencia = 0;

    potencia = calcular_potencia(100,-2); // Base < 0
    printf("Base = 0 , Expoente = -2. o Potencia = %.1d => %i\n", potencia, potencia == 0);

    potencia = calcular_potencia(-100,6); // Expoente < 0
    printf("Base = -100 , Expoente = 6 o Potencia = %.1d => %i\n", potencia, potencia == 0);

    potencia = calcular_potencia(0,5); // Base == 0
    printf("Base = 0 , Expoente = 5 o Potencia = %.1d => %i\n", potencia, potencia == 0);

    potencia = calcular_potencia(6,0); // Expoente == 0
    printf("Base = 6 , Expoente = 0 o Potencia = %.1d => %i\n", potencia, potencia == 0);

    potencia = calcular_potencia(2,8); // Potencia normal
    printf("Base = 2 , Expoente = 8 o Potencia = %.1d => %i\n", potencia, potencia == 0);

    return 0;
}
