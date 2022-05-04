#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  int main() {

    //Declaração das variaveis 
  int  tam, *ponteiro1;
  float raiz;
  int soma, somafinal;
  
  //Usuario informa a quantidade de numeros q serão digitados em seguida
  printf("Informe quantos numeros voce quer digitar para cada um dos vetores:\n");
    scanf("%d",&tam);


  // Um for para ler os numeros digitados pelo usuario e fazer os calculos da norma de um vetor 
    for(int i=0;i<tam;i++)
    {
      printf("Digite valor para posicao %d:\n",i+1);
      scanf("%d",&ponteiro1[i]);
      soma= pow(ponteiro1[i],2);
      somafinal += soma;
    }

  //Calculo final e printf informando o resultado final
    raiz = sqrt(somafinal);
    printf("O resultado e: %f", raiz);


    return 0;
  }