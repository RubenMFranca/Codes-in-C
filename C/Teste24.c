#include <stdio.h>
#include <stdlib.h>

int main(){
int tam;

printf("Informe quantos numeros voce quer digitar para cada um dos vetores:\n");
scanf("%d",&tam);

int *ponteiro2=malloc(tam *sizeof(int));
int *ponteiro1=malloc(tam *sizeof(int));
int *ponteiro3=malloc(tam *sizeof(int));

for(int i=0;i<tam;i++)
  {
    printf("Digite valor para posicao %d:\t",i+1);
    scanf("%d",&ponteiro1[i]);
  }


printf("Vetor 2\n");

for(int i=0;i<tam;i++)
  {
    printf("digite valor para posicao %d:\t",i+1);
    scanf("%d",&ponteiro2[i]);
  }

printf("vetor 3\n");
for(int i=0;i<tam;i++)
  {
    ponteiro3[i]=ponteiro1[i]+ponteiro2[i];
    printf("%d-",ponteiro3[i]);
  }

}