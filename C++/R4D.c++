#include <iostream>
using namespace std;

int main(){

  float salario, bonus, soma;

  cout << "Informe seu salario: ";
  cin >> salario;

  if (salario <= 500)
  {
    soma = (salario * 0.3) + salario;
    cout << "Seu salario é: " << soma; 
  }else{
    cout << "Seu salario é; "<<salario; 
  }
  
  return 0;
}