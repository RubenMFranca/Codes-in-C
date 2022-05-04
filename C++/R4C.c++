#include <iostream>
using namespace std;

int main(){
  float nota1, nota2, nota3, nota4, media;

  cout<<"Informe a primeira nota: ";
  cin >> nota1;
  cout<<"Informe a segunda nota: ";
  cin >> nota2;
  cout<<"Informe a terceira nota: ";
  cin >> nota3;
  cout<<"Informe a quarta nota: ";
  cin >> nota4;

media = (nota1 + nota2 + nota3 + nota4) / 4;
cout<<"Sua media é: "<<media;

if (media >= 7){
  cout<<"Voce esta aprovado";
}else{
  cout<<"Voce esta reprovado";
}

}

