#include <stdio.h>

int main() {
  float salario, pagamento, pagamento1, pagamento2, juros1, juros2, resultado1, resultado2, sem_juros, saldofinal, saldofinalsemjuros;

  printf("Informe seu salario: ");
  scanf("%f", &salario);
  printf("Informe o valor do primero pagamento: ");
  scanf("%f", &pagamento1);
  printf("Informe O valor do segundo pagamento: ");
  scanf("%f", &pagamento2);

  if(pagamento1 > 500 || pagamento2 > 500) {
    juros1 = (pagamento1 * 0.30) / 100;
    resultado1 = pagamento1 + juros1;
    juros2 = (pagamento2 * 0.30) / 100;
    resultado2 = pagamento2 + juros2;
    pagamento = resultado1 + resultado2;
    saldofinal = salario - pagamento;
    printf("Seu saldo final é: %f", saldofinal);
  }

  if(pagamento < 500 ) {
    sem_juros = pagamento1 + pagamento2;
    saldofinalsemjuros = salario - sem_juros;
    printf("Seu saldo final é: %f", saldofinalsemjuros);
  }
}
