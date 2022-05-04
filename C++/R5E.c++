#include <iostream>
using namespace std;

int main() {
  int peso;
  float altura; 
  double  imc;

  cout << "Informe o peso (em kgs): ";
  cin >> peso;

  cout << "Informe a altura (em metros):";
  cin >> altura;

  imc = peso / (altura * altura);
  cout << "\nIMC = "<< imc;

    if (imc < 18,5)
      cout <<" (abaixo do peso).";
    else if ((imc >= 18,5) && (imc < 25))
            cout <<" (peso normal).";
        else if ((imc >= 25) && (imc < 30))
                cout <<" (acima do peso).";
              else if (imc > 30)
                      cout <<" (obeso).";
      else
          cout <<" (muito obeso).";
    
    return 0;
}
