#include <stdio.h>

int main () {
int vetor[15], par=0, impar=0, i;

for (i=0; i<15; i++){
printf("Insira um numero:");
scanf("%d", &vetor[i]);

if (vetor[i] %2==0){
par += 1; }

else {
impar +=1; }
}

for (i=0; i<15; i++){

printf("%d\n", vetor[i]); }
printf("Pares: %d\n Impares:%d", par, impar);

}

