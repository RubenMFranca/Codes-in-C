#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *ponteiro;
   int tam;

   printf("Informe quantos numeros voce quer digitar:\n");
   scanf("%d",&tam);

  *ponteiro=(malloc(tam *sizeof(int)));


  for(int i=0;i<tam;i++)
          {
              printf("Digite um numero para posicao %d:\n",i+1);
              scanf("%d",&ponteiro[i]);
          }

  for(int i=0;i<tam;i++)
          {
              if(ponteiro[i]%2==0)
              {
                   printf("Numeros pares digitados: %d\n",ponteiro[i]);
              }
          }

  return 0;

}