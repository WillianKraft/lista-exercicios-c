#include <stdio.h>

int main(){
        
    float distancia_percorrida;
    float litros_consumidos;
    float media;
    printf("Digite a distancia percorrida: ");
    scanf("%f",&distancia_percorrida);
    
    printf("Digite os litros consumidos: ");
    scanf("%f",&litros_consumidos);
    
    media = distancia_percorrida / litros_consumidos;
    
    if(media>=12){
        printf("Eficiente");
        
    }
    
    else{
        printf("Baixa Eficiencia");
        
    }
    
    
    
    
    
    
    
    return 0;
}