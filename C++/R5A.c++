#include <iostream>
using namespace std;

int main(){

  float peso, idade;

  cout<<"informe seu idade: ";
  cin >> idade;
  cout<<"informe seu peso: ";
  cin >> peso;

  if (idade < 20){
    if (peso <= 60){
      cout<<"Grupo 9";
    }else if (peso > 60 <= 90){
      cout<<"Grupo 8";
    }else{
      cout<<"Grupo 7";
    }
    
  }else if (idade >= 20 && idade <= 50){
    if (peso <= 60){
      cout<<"Grupo 6";
    }else if (peso > 60 <= 90){
      cout<<"Grupo 5";
    }else{
      cout<<"Grupo 4";
    }
  }else{
    if (peso <= 60){
      cout<<"Grupo 3";
    }else if (peso > 60 <= 90){
      cout<<"Grupo 2";
    }else{
      cout<<"Grupo 1";
    }
  }

  return 0;
}