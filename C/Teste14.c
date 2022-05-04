#include <stdio.h>

int main(){
    int i, num[20], par[5], impar[5],x=0,y=0;

    printf("Digite 20 numeros inteiros:\n\n");

    for (i=0; i<20; i++) //preenchimento do vetor//
        scanf("%d",&num[i]);

    for (i=0; i<10; i++)
    {
        if(num[i]%2 == 0)//verificação se o número é par//
        {
            par[x]=num[i];//Armazenamento dos numeros pares no vetor par//
            x++; 
        }
        else //se o numeto inteiro não é par, é ímpar!//
        {
            impar[y]=num[i];//Armazenamento dos numeros ímpares no vetor ímpar//
            y++;
        }
     }


    printf("\nNumeros pares digitados\n"); //impressão do vetor par//

    for (i=0; i<x; i++)
         printf("%d\n",par[i]);
         
    
    printf("\nNumeros impares digitados\n");//impressão do vetor ímpar//

    for (i=0; i<y; i++)
         printf("%d\n",impar[i]);

   
}