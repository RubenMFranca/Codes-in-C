// Fazer um programa que mostre a multiplicação dos 3 numeros inseridos
#include <stdio.h>

int main()
{
  //Declaração de variaveis
  float numero1, numero2, numero3, soma;
  
  //Coleta dos numeros inseridos pelo usuarioi
  printf("Digite o primeiro numero: ");
  scanf("%f", &numero1);
  printf("Digite o segundo numero: ");
  scanf("%f", &numero2);
  printf("Digite o terceiro  numero: ");
  scanf("%f", &numero3);

  //Multiplicação dos numeros digitados
  soma = numero1 * numero2 * numero3;

  //Imprimi o resultado
  printf("O resultado é: %2.f", soma);
}