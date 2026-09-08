
#include <stdio.h>

int main()
{
    float nota1;
    float nota2;
    float nota3;
    float frequencia;
    
    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%f",&nota3);
    
    printf("Digite a frequencia: ");
    scanf("%f",&frequencia);
    
    float media = (nota1 + nota2 + nota3)/3;
    
    if(media>=7 &&frequencia>=75){
        printf("Aprovado");
    }
    else if(media>=5 &&media<=6.9 &&frequencia>=75){
        printf("Recuperacao");
        
    }
    else{
        printf("Reprovado");
    }
    
    
    

    return 0;
}
