//Fazer um programa que leia 3 numeros e mostre-os em ondem decresente
#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Leitura dos 3 numeros e Declaração de variaveis
  int vet[3], aux, i;
  printf("Digite 3 numeros:\n ");
  for (int i = 0; i < 3; i++)
  {
    printf("\n", i);
    scanf("%d", &vet[i]);
  }
  
  //
  for (int i = 0; i < 3; i++)
  {
    //Usei o for para fazer a modificação dos 3 numeros indicados pelo usuario
    //Com o if dentro for eu peguei os valores e modifiquei a posição deles atraves de uma variavel auxiliar
    for (int y = i + 1; y < 3; y++)
    {
      if (vet[y] > vet[i])
      {
        aux = vet[i];
        vet[i] = vet[y];
        vet[y] = aux;
      }
    }
  }

  //Imprimir a orden decresente dos numeros
  printf("\nOs numeros em ordem decresente sao: ");
  for (int i = 0; i < 3; i++)
  {
    printf("\n\n %d", vet[i]);
  }
  
}