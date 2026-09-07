
#include <stdio.h>

int main()
{
    float consumo_mensal;
    float valor_conta;
    
    printf("Digite seu consumo mensal:");
    scanf("%f",&consumo_mensal);
    
    if(consumo_mensal<=100){
        valor_conta = consumo_mensal * 0.60;
        
    }
    
    else if(consumo_mensal>=101 &&consumo_mensal<=200){
        valor_conta = consumo_mensal * 0.75;
    }
    else{
        valor_conta = consumo_mensal * 0.90;
        
    }
    printf("%.2f",valor_conta);
    return 0;
}
