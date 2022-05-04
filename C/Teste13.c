#include <stdio.h>

int main(){
int vetor1[3], vetor2[3], i, j, somav1v2=0, somav2v1=0;

for(i=0; i<=2; i++)
{
  printf("Informe o primeiro vetor: ");
  scanf("%i", &vetor1[i]);
}
for(i=0; i<=2; i++)
{
   printf("A posição dos elementos %d: %i\n",i, vetor1[i]);
}
for(i=0; i<=2; i++)
{
  printf("Informe o segundo vetor: ");
  scanf("%i", &vetor2[i]);
}
for(j=0; j<=2; j++){
  printf("A posição dos elementos %d: %i\n",j, vetor2[j]);
}

for(i=0; i<3; i++){
  somav1v2 = vetor1[i]*vetor2[i];
  somav2v1 = vetor2[i]*vetor1[i];
  printf("Resultado 1: %i\n", somav1v2);
  printf("Resultado 2: %i\n", somav2v1);
}
}