int main()
{
    int n = 4, resultado = 0;

    //foi realizado a somatario do numero apos o segundo for  
    for (int cnt4 = 0, i = 1; i <= n; i *= 2) {
        for (int j = 1; j <= i; j++) {
            resultado = resultado + i;
        }
        cnt4++;   
    }
    //Imprime o resultado
    printf("resultado final: %i", resultado);
}