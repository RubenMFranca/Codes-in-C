#include <stdio.h>
int main(){

    float preco, precofinal, imposto, seguro, valort, impostototal;
    char pais, trans, carga;

    printf("Digite o país de origem da carga: m-México, e-Estados Unidos, o-Outros\n");
    scanf(" %c", &pais);
    fflush(stdin);

    printf("Digite o meio de transporte que sera ultilizado: t-Terrestre f-Fluvial a-Aéreo\n");
    scanf(" %c", &trans);
    fflush(stdin);

    printf("A carga é pergiosa? s-Sim n-Não\n");
    scanf(" %c", &carga);
    fflush(stdin);

    printf("Digite o valor da carga: ");
    scanf("%f", &preco);

    if (preco < 1000)
    {
        imposto = preco * 0.10;
    }
    else
    {
        imposto = 0.15 * preco;
    }

    switch (carga)
    {
    case 's':
      switch (pais)
        {
        case 'e':
            switch (trans)
            {
            case 't':
                valort = 60;
                seguro = 0;
                precofinal = preco + imposto + valort + seguro;
                impostototal = valort + imposto;
                printf("O valor do imposto é: %4.2f\n", imposto);
                printf("O valor do transporte é: %4.2f\n", valort);
                printf("O valor do seguro é: %4.2f\n", seguro);
                printf("O preço total é: %4.2f\n", precofinal);
                printf("O imposto total é: %4.2f\n", impostototal);
                break;
            case 'a':
                valort = 60;
                seguro = preco / 2;
                precofinal = preco + imposto + valort + seguro;
                impostototal = valort + imposto;
                printf("O valor do imposto é: %4.2f\n", imposto);
                printf("O valor do transporte é: %4.2f\n", valort);
                printf("O valor do seguro é: %4.2f\n", seguro);
                printf("O preço total é: %4.2f\n", precofinal);
                printf("O imposto total é: %4.2f\n", impostototal);
                break;
            case 'f':
                valort = 60;
                seguro = 0;
                precofinal = preco + imposto + valort + seguro;
                impostototal = valort + imposto;
                printf("O valor do imposto é: %4.2f\n", imposto);
                printf("O valor do transporte é: %4.2f\n", valort);
                printf("O valor do seguro é: %4.2f\n", seguro);
                printf("O preço total é: %4.2f\n", precofinal);
                printf("O imposto total é: %4.2f\n", impostototal);
                break;
            }
            break;
        case 'm':
            valort = 31;
            seguro = preco / 2;
            precofinal = preco + imposto + valort + seguro;
            impostototal = valort + imposto;
            printf("O valor do imposto é: %4.2f\n", imposto);
            printf("O valor do transporte é: %4.2f\n", valort);
            printf("O valor do seguro é: %4.2f\n", seguro);
            printf("O preço total é: %4.2f\n", precofinal);
            printf("O imposto total é: %4.2f\n", impostototal);
            break;

        case 'o':
            switch (trans)
            {
            case 't':
                valort = 34;
                seguro = 0;
                precofinal = preco + imposto + valort + seguro;
                impostototal = valort + imposto;
                printf("O valor do imposto é: %4.2f\n", imposto);
                printf("O valor do transporte é: %4.2f\n", valort);
                printf("O valor do seguro é: %4.2f\n", seguro);
                printf("O preço total é: %4.2f\n", precofinal);
                printf("O imposto total é: %4.2f\n", impostototal);
                break;
            case 'a':
                valort = 34;
                seguro = preco / 2;
                precofinal = preco + imposto + valort + seguro;
                impostototal = valort + imposto;
                printf("O valor do imposto é: %4.2f\n", imposto);
                printf("O valor do transporte é: %4.2f\n", valort);
                printf("O valor do seguro é: %4.2f\n", seguro);
                printf("O preço total é: %4.2f\n", precofinal);
                printf("O imposto total é: %4.2f\n", impostototal);
                break;
            case 'f':
                valort = 34;
                seguro = 0;
                precofinal = preco + imposto + valort + seguro;
                impostototal = valort + imposto;
                printf("O valor do imposto é: %4.2f\n", imposto);
                printf("O valor do transporte é: %4.2f\n", valort);
                printf("O valor do seguro é: %4.2f\n", seguro);
                printf("O preço total é: %4.2f\n", precofinal);
                printf("O imposto total é: %4.2f\n", impostototal);
                break;
            }
            break;
        }
        break;

    case 'n':
        switch (pais)
        {
        case 'e':
            switch (trans)
            {
            case 't':
                valort = 22;
                seguro = 0;
                precofinal = preco + imposto + valort + seguro;
                impostototal = valort + imposto;
                printf("O valor do imposto é: %4.2f\n", imposto);
                printf("O valor do transporte é: %4.2f\n", valort);
                printf("O valor do seguro é: %4.2f\n", seguro);
                printf("O preço total é: %4.2f\n", precofinal);
                printf("O imposto total é: %4.2f\n", impostototal);
                break;
            case 'a':
                valort = 22;
                seguro = preco / 2;
                precofinal = preco + imposto + valort + seguro;
                impostototal = valort + imposto;
                printf("O valor do imposto é: %4.2f\n", imposto);
                printf("O valor do transporte é: %4.2f\n", valort);
                printf("O valor do seguro é: %4.2f\n", seguro);
                printf("O preço total é: %4.2f\n", precofinal);
                printf("O imposto total é: %4.2f\n", impostototal);
                break;
            case 'f':
                valort = 22;
                seguro = 0;
                precofinal = preco + imposto + valort + seguro;
                impostototal = valort + imposto;
                printf("O valor do imposto é: %4.2f\n", imposto);
                printf("O valor do transporte é: %4.2f\n", valort);
                printf("O valor do seguro é: %4.2f\n", seguro);
                printf("O preço total é: %4.2f\n", precofinal);
                printf("O imposto total é: %4.2f\n", impostototal);
                break;
            }
            break;
        case 'm':
            valort = 31;
            seguro = preco / 2;
            precofinal = preco + imposto + valort + seguro;
            impostototal = valort + imposto;
            printf("O valor do imposto é: %4.2f\n", imposto);
            printf("O valor do transporte é: %4.2f\n", valort);
            printf("O valor do seguro é: %4.2f\n", seguro);
            printf("O preço total é: %4.2f\n", precofinal);
            printf("O imposto total é: %4.2f\n", impostototal);
            break;

        case 'o':
            switch (trans)
            {
            case 't':
                valort = 70;
                seguro = 0;
                precofinal = preco + imposto + valort + seguro;
                impostototal = valort + imposto;
                printf("O valor do imposto é: %4.2f\n", imposto);
                printf("O valor do transporte é: %4.2f\n", valort);
                printf("O valor do seguro é: %4.2f\n", seguro);
                printf("O preço total é: %4.2f\n", precofinal);
                printf("O imposto total é: %4.2f\n", impostototal);
                break;
            case 'a':
                valort = 70;
                seguro = preco / 2;
                precofinal = preco + imposto + valort + seguro;
                impostototal = valort + imposto;
                printf("O valor do imposto é: %4.2f\n", imposto);
                printf("O valor do transporte é: %4.2f\n", valort);
                printf("O valor do seguro é: %4.2f\n", seguro);
                printf("O preço total é: %4.2f\n", precofinal);
                printf("O imposto total é: %4.2f\n", impostototal);
                break;
            case 'f':
                valort = 70;
                seguro = 0;
                precofinal = preco + imposto + valort + seguro;
                impostototal = valort + imposto;
                printf("O valor do imposto é: %4.2f\n", imposto);
                printf("O valor do transporte é: %4.2f\n", valort);
                printf("O valor do seguro é: %4.2f\n", seguro);
                printf("O preço total é: %4.2f\n", precofinal);
                printf("O imposto total é: %4.2f\n", impostototal);
          break;
        }
  break;
        }
  break;
    }


}