#include <iostream>
using namespace std;

int main(){

  float angulo;

  cout<<"Informe  o angulo: ";
  cin >> angulo;

  if(angulo > 360){

      if(angulo < 90)
      cout<<"Esta no primeiro quadrante";
      if(angulo > 90 && angulo < 180)
      cout<<"Esta no segundo quadrante";
      if(angulo > 180 && angulo < 270)
      cout<<"Esta no terceiro quadrante";
      if(angulo > 270 && angulo < 360)
      cout<<"Esta no quarto quadrante";
      }
  
  return 0;
}