#include <stdio.h>

int main() {

  int n1;
  int n2;
  int soma;
  printf("Digite um numero:");
  scanf("%d", &n1);
  printf("Digite outro numero:");
  scanf("%d", &n2);
  soma = n1 + n2;

  printf("A soma dos dois numeros e: %d\n", soma);

  if (soma > 20) {
    printf("A soma e maior que 20");
  } else if (soma == 20) {
    printf("A soma e igual a 20");
  } else {
    printf("A soma e menor que 20");
  }

  return 0;
}