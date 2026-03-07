#include <stdio.h>
void indice(){

    int peso;
    float altura;
    printf("Digite o peso: ");
    scanf("%d", &peso);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    if (peso <= 0 || altura <= 0)
    {
        return;
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

int main(){
    
    indice();
    return 0;
}
