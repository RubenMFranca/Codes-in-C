#include <iostream>
using namespace std;

int main(){

  float peso, altura;

  cout<<"informe seu altura em centimetros: ";
  cin >> altura;
  cout<<"informe seu peso: ";
  cin >> peso;

  if (altura < 120){
    if (peso <= 60){
      cout<<"Grupo A";
    }else if (peso > 60 <= 90){
      cout<<"Grupo D";
    }else{
      cout<<"Grupo G";
    }
    
  }else if (altura >= 120 && altura <= 170){
    if (peso <= 60){
      cout<<"Grupo B";
    }else if (peso > 60 <= 90){
      cout<<"Grupo E";
    }else{
      cout<<"Grupo H";
    }
  }else{
    if (peso <= 60){
      cout<<"Grupo C";
    }else if (peso > 60 <= 90){
      cout<<"Grupo F";
    }else{
      cout<<"Grupo i";
    }
  }

  return 0;
}