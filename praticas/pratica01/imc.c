#include <stdio.h>
float indice(int peso,float altura){
    if (peso <= 0 || altura <= 0)
    {
        return 0;
    }
    float imc = peso / (altura * altura);
    if (imc < 18.5)
    {
        printf("Condição: Abaixo do peso");
    }
    
    else if (imc >= 18.5 && imc <= 24.9 )
    {
        printf("Condição: Peso normal");
    }

    else if (imc >= 25 && imc <= 29.9)
    {
        printf("Condição: Sobrepeso");
    }

    else{
        printf("Condição: Obesidade");
    }
}

int main(int argc, char const *argv[]){
    indice(70, 1.75);
    return 0;
}
