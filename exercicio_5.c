#include <stdio.h>

int main(){

    float novosalario;
    float reajuste;
    float salarioantigo;

    printf("Digite seu salario:");
    scanf("%f",&salarioantigo);

    if (salarioantigo < 2500.00){
        reajuste = salarioantigo * 0.10;
        novosalario = salarioantigo + reajuste;
        printf("O valor do seu reajuste e de 10%%, no valor de R$ %.2f\n", reajuste);
        printf("Seu novo salario e de R$ %.2f\n", novosalario);
    }

    else{
        reajuste = salarioantigo * 0.06;
        novosalario = salarioantigo + reajuste;
        printf("O valor do seu reajuste e de 6%%, no valor de R$ %.2f\n", reajuste);
        printf("Seu novo salario e de R$ %.2f\n", novosalario);
    }

    return 0;
}