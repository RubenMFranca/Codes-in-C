#include <iostream>
using namespace std;

int main(){

    float numero1, numero2, numero3, contador;

    cout<<"Digite o primeiro numero: ";
    cin >> numero1;
    cout<<"Digite o segundo numero: ";
    cin >> numero2;
    cout<<"Digite o terceiro numero: ";
    cin >> numero3;

    if(numero2 > numero1){
        contador = numero1;
        numero1 = numero2;
        numero2 = contador;
    }

    if(numero3 > numero1){
        contador = numero1;
        numero1 = numero3;
        numero3 = contador;
    }

    if(numero3 > numero2){
        contador = numero2;
        numero2 = numero3;
        numero3 = contador;
    }

    cout <<numero1<<" \n "<<numero2<<" \n "<<numero3;

}