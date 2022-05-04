#include <stdio.h>

int main() {
  int pessoas, count, idade, altura, peso, soma = 0, media1, peso_80 = 0, autura_180 = 0, media = 0, porcentagem, porcentagem1;

  printf("Informe o número de pessoas: ");
  scanf("%d", &pessoas);

  for( count = 0; count < pessoas; count++ ) {
    printf("Informe a sua idade: ");
    scanf("%d", &idade);
    printf("Informe a sua altura: ");
    scanf("%d", &altura);
    printf("Informe o seu peso: ");
    scanf("%d", &peso);

    soma = soma + idade;
    media1 = soma / pessoas;

    if( peso < 80 ) {
      peso_80++;
    }

    if(altura > 180) {
      autura_180++;
    }

    if( idade >= 20 && idade <= 35 && altura > 170 ) {
      media++;
    }
    porcentagem = (media * 100) / pessoas;
    
  }
  //QuestãoA
  printf("A media das idades e: %d\n", media1);
  //Questão B
  printf("A quatidade de pessoas com altura superior a 1.8m é: %d\n", autura_180);
  printf("A quantidade de pessoas com peso inferior a 80Kg é:  %d\n", peso_80);
  //Questão C
  printf("A porcentagem de pessoas com idade entre 20 anos e 35 anos e altura maior que 1.70m é: %d\n", porcentagem);
}
