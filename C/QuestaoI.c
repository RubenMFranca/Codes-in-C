#include <stdio.h>

int main(){

//Declaração das variaveis do programa
int pu, put, put2, valort, seguro;
char e, m, o;
char s, n;
char t, l, a;

//imprimir perguntas ao usuario para obter dados para o programa 
printf("Qual o valor unitario: ");
scanf("%d",&pu);
printf("A carga e perigosa? Digite s-para Sim e n-para Nao: ");
scanf("%s", &s, &n);
printf("\n");
printf("Qual o pais de origem? Digite e-para Estados Unidos, m-para Mexico, e o-para Outros: ");
scanf("%s", &e, &m, &o);
printf("Qual sera o meio de transporte utilizado: ");
scanf("%s", &t, &l, &a);

//Uso do if para cair na condição desejada 
if(s && e){
valort = 60;
printf("Valor do transporte e: %i", valort);
}
  else if(s && m){
  valort = 31;
  printf("Valor do transporte m: %i", valort);
}
  else if(s && o){
  valort = 34;
  printf("Valor do transporte o: %i", valort);
  }

if(n && e){
valort = 22;
printf("Valor do transporte e: %i", valort);
}
  else if(n && m){
  valort = 31;
  printf("Valor do transporte m: %i", valort);
}
  else if(n && o){
  valort = 70;
  printf("Valor do transporte o: %i", valort);
}

if(m && a){
  seguro = pu / 2;
  printf("O valor do seguro e: %i", seguro);
}
 

//Uso do if para achar o valor total dos imposto
if(pu<=1000)
  {
    put = pu + (pu * 0.1); 
    printf("Valor unitario mais imposotos: %i\n", put);
  }
  else if(pu>1000)
  { 
    put2 = pu + (pu * 0.15);
    printf("Valor unitario mais imposotos: %i\n", put2);
  }

}

