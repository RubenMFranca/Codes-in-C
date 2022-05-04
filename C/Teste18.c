#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *ponteiro;
   int tam;

   printf("Informea quantidadede numeros que voce quer digitar(digite valores sempre positivos)\n");
   scanf("%d",&tam);

  *ponteiro=(malloc(tam *sizeof(int)));

   int soma;
   float media;

   for(int i=0;i<tam;i++)
          {
              printf("digite valor para posicao %d:\n",i+1);
              scanf("%d",&ponteiro[i]);
                soma+=ponteiro[i];
          }

    media=soma/tam;
    printf("media e: %.f",media);



  return 0;
}