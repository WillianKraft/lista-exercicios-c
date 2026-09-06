#include <stdio.h>

int main() {
    
    float nota1;
    float nota2;
    
    printf("Digite a nota da primeira prova:");
    scanf("%f",&nota1);
    
    printf("Digite a nota da segunda prova:");
    scanf("%f",&nota2);
    
    float media = (nota1 + nota2)/2;
        
    if (media>=7){
       printf("Aprovado");
       
    }
    
    else{ 
    printf("Reprovado");
        
    }
    

    
    
    
    
    
    
    
    return 0;
}
