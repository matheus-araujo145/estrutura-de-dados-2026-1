#include <stdio.h>

float calcular_imc(float peso, float altura){

    if (peso <= 0 || altura <= 0)
    {
        return 0;
    }
    return peso / (altura * altura);
}

int main(){
    
    float imc = 0;

    imc = calcular_imc(100,-1.8); //Altura < 0
    printf("Peso = 0 , Altura = 1.56 o IMC = %.1f => %i\n", imc, imc == 0);

    imc = calcular_imc(-100,1.7); //Peso < 0
    printf("Peso = 0 , Altura = 1.56 o IMC = %.1f => %i\n", imc, imc == 0);

    imc = calcular_imc(0,1.56); //Peso == 0
    printf("Peso = 0 , Altura = 1.56 o IMC = %.1f => %i\n", imc, imc == 0);

    imc = calcular_imc(50,0); //Altura == 0
    printf("Peso = 50 , Altura = 0 o IMC = %.1f => %i\n", imc, imc == 0);

    imc = calcular_imc(50,1.7); //Abaixo do peso
    printf("Peso = 50 , Altura = 1.7 o IMC = %.1f => %i\n", imc, imc < 18.5);

    imc = calcular_imc(75,1.8); //Normal
    printf("Peso = 75 , Altura = 1.75 o IMC = %.1f => %i\n", imc, imc >= 18.5 && imc <= 24.9);

    imc = calcular_imc(65,1.55); //Sobrepeso
    printf("Peso = 75 , Altura = 1.75 o IMC = %.1f => %i\n", imc, imc >= 25 && imc <= 29.9);

    imc = calcular_imc(100,1.5); //Obesidade
    printf("Peso = 100 , Altura = 1.5 o IMC = %.1f => %i\n", imc, imc > 30 );

    return 0;

}
