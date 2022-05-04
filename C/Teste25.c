#include <stdio.h>
float somatorio (float i) {
    if (i == 1) {
        return 0.5;
    } else if (i == 0) {
        return 0;
    } else {
        return ((i*i) + 1) / (i + 3);// + somatorio (i - 1);
    }
}

int main () {
    float num;

    printf("Digite um numero: ");
    scanf("%f", &num);
    printf("O somatorio de %.0f é igual a: %.2f", num, somatorio(num));
    return 0;
}