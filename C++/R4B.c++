#include <iostream>
using namespace std;

int main(){

  int senha;

  cout<<"Digite a senha: ";
  cin >> senha;

  if (senha == 4531 ){
    cout<<"Senha valida, acesso  permitido";
  }else{
    cout<<"Senha invalida, acesso não permitido";
  } 
  
  return 0;
}