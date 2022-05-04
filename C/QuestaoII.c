#include <stdio.h>
#include <stdlib.h>

int main (){

//Declaração das variaveis utilizadas no programa
int corredor[24], janela[24];
int i, opcao, poltrona;
char assento;

//For para os assentos estarem desocupados
for (i = 0; i < 24; i++)
{
    janela[i] = 0;
}

for (i = 0; i < 24; i++)
{
    corredor[i] = 0;
}

//imprime o menu com as opcoes de redirecionamento
printf("Menu:\n");
printf("1 - Vender passagem \n2 - Mostrar mapa de ocupação do ônibus \n3 - Encerrar\n\n");
scanf("%i", &opcao);
switch (opcao) {
    //caso o usuario escolha a opção 1 , o programa pergunta qual opção ele prefere de assento 
    case 1:
        printf("Qual assento voce prefere? digite (j)- para janela ou (c)- para corredor: \n");
        scanf("%s", &assento);
        
        if(assento == 'j'){
        //O usuario escolhe o assento da janela desejado entre os disponiveis 
        printf("Qual poltrona você deseja? Digite um número de 0 a 23:\n");
        scanf("%i",&poltrona);
            
            if(janela[poltrona] == 0){
            
                for(i = 0;i < 24;i++)
                {
                if(janela[i] == janela[poltrona])
                janela[i] = 1;
                
                }
            printf("\nJanela[%i] = 1",poltrona);
            printf("\n\nVenda efetivada!");
            }
            //Imprime esta messagem caso esteja ocupado o assento da janela o lugar selecionado ou estiver lotado
            else if(janela[poltrona] == 1){
                printf("Poltrona ocupada!");
            }
            else{
                printf("Todas as poltronas se encontram ocupadas!");
            }
        }
            
            
        if (assento == 'c'){
            //O usuario escolhe o assento do corredor desejado entre os disponiveis 
            printf("Qual poltrona você deseja? Digite um número de 0 a 23.\n");
            scanf("%i",&poltrona);
            
            if(corredor[poltrona] == 0)
            {
                for(i = 0;i < 24;i++)
                {
                    if(corredor[i] == corredor[poltrona])
                    corredor[i] = 1;
                }
                printf("\nJanela[%i] = 1",poltrona);
                printf("\nVenda efetivada!");
            }
            //Imprime esta messagem caso esteja ocupado os assentos do corredor o lugar selecionado ou estiver lotado
            else if(corredor[poltrona] == 1)
            {
                printf("Poltrona ocupada!");
            }
            else{
                printf("Todas as poltronas se encontram ocupadas!");
            }
        }
        
        break;
    case 2:
        //O programa imprimi os assentos disponiveis tanto na janela quanto no corredor, caso o usuario escolha a opção 2 no "menu"
        printf("\n");
        printf("\nPosições livres");
        printf("\nJanela: ");
        for(i = 0;i < 24;i++)
        {
            if(janela[i] == 0)
            printf("\t%i",i);
            
        }
        printf("\n");
        printf("\nCorredor: ");
        for(i = 0;i < 24;i++)
        {
            if(corredor[i] == 0)
            printf("\t%i",i);
            
        }

printf("\n");
printf("\nPosições ocupadas:");
printf("\nJanela: ");
for(i = 0;i < 24;i++)
{
    if(janela[i] == 1)
    printf("\n%i",i);
}

printf("\n");
printf("\nCorredor: ");
for(i = 0;i < 24;i++)
{
    if(corredor[i] == 1)
    printf("\n%i",i);
}
    break;
    //Caso o usuario escolha a opção 3 do menu o programa sera encerrado
    case 3:
        printf("\n");
        break;
    default:
        printf("Você deve escolher uma opção válida, tente novamente\n");
        
}

}
