#include <stdio.h>
#include <stdlib.h>

int main(){
int tam;

printf("Informe quantos numeros voce quer digitar para cada um dos Vet\n");
scanf("%d",&tam);

int *ponteiro2=malloc(tam *sizeof(int));
int *ponteiro=malloc(tam *sizeof(int));
int *ponteiro3=malloc(tam *sizeof(int));

for(int i=0;i<tam;i++)
  {
    printf("Digite valor para posicao %d:\t",i+1);
    scanf("%d",&ponteiro[i]);
  }


printf("vetor 2\n");

for(int i=0;i<tam;i++)
  {
    printf("digite valor para posicao %d:\t",i+1);
    scanf("%d",&ponteiro2[i]);
  }

printf("vetor 3\n");
for(int i=0;i<tam;i++)
  {
    ponteiro3[i]=ponteiro[i]*ponteiro2[i];
    printf("%d-",ponteiro3[i]);
  }

printf("\n\n");
for(int i=0;i<tam;i++)
  {
    ponteiro3[i]=ponteiro[i]*ponteiro2[i];
    printf("%d-",ponteiro3[i]);

    if (ponteiro[i]==ponteiro2[i])
    {
      printf("A propriedade e verdadeira\n");
    }
    else{
      printf("A propriedade e falsa\n");
    }
  }
}