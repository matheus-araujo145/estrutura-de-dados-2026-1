#include <stdio.h>
float indice(int peso,float altura){
    if (peso <= 0 || altura <= 0)
    {
        return 0;
    }
    float imc = peso / (altura * altura);
    if (imc < 18.5)
    {
        printf("Condicao: Abaixo do peso");
    }
    
    else if (imc >= 18.5 && imc <= 24.9 )
    {
        printf("Condicao: Peso normal");
    }

    else if (imc >= 25 && imc <= 29.9)
    {
        printf("Condicao: Sobrepeso");
    }

    else{
        printf("Condicao: Obesidade");
    }
}

int main(int argc, char const *argv[]){
    indice(70, 1.75);
    return 0;
}
