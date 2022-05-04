#include<stdio.h>
#include<stdlib.h>

int main(){ 
int n, i, j, cont=0;
int *vet;
printf("Digite o tamanho do vetor: ");
scanf("%d",&n);

vet = (int*) malloc(n*sizeof(int));

for(i=0;i<n;i++)
  {
    printf("Coloque o valor de indice %d: ",i);
    scanf("%d",&vet[i]);
  }

for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(vet[i]==vet[j] && i!=j && vet[i]!=99)
            {
                printf("Numero repetido: %d\n",vet[i]);
                vet[j] = 99;
                vet[i] = 99;
                break;
            }

        }
}
}