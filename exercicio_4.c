#include <stdio.h>
 
int main(){
 
    float valorcompra;
    float desconto;
    float valorfinal;
    printf("Digite o valor da sua compra:");
    scanf("%f",&valorcompra);
 
    if (valorcompra >= 300.00){
        desconto = valorcompra * 0.12;
        valorfinal = valorcompra - desconto;
        printf("O valor de seu desconto e de 12%%, no valor de R$ %.2f\n", desconto);
        printf("Seu valor final foi de: R$ %.2f\n", valorfinal);
    }
 
    else{
        desconto = valorcompra * 0.05;
        valorfinal = valorcompra - desconto;
        printf("O valor de seu desconto e de 5%%, no valor de R$ %.2f\n", desconto);
        printf("Seu valor final foi de: R$ %.2f\n",valorfinal);
    }
 
    return 0;
}
 
