#include <stdio.h>

int main(void)
{
  int i, length;
  char str[100];

  printf("Digite a frase: ");
  fgets(str,100,stdin);
  length = strlen(str);
  printf("O tamanho do vetor é: %i \n", length);

  printf("Exibindo a posição das letras \n");

  for( i = 0 ; i <= length - 2; i++)
  {
    printf("posicao[%d] = %c\n",i + 1, str[i]);
  }
  return 0;
}
