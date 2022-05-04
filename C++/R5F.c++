#include <iostream> 
using namespace std;  

int main() {   
int ano1;  int mes1;  int dia1;  int ano2;  int mes2;  int dia2;
  
cout << "Informe o dia da primeira data: ";     
cin >> dia1;        
cout << "Informe o mês da primeira data: ";     
cin >> mes1;        
cout << "Informe o ano da primeira data: ";     
cin >> ano1;            
cout << "Informe o dia da segunda data: ";     
cin >> dia2;        
cout << "Informe o mês da segunda data: ";     
cin >> mes2;        
cout << "Informe o ano da segunda data: ";     
cin >> ano2;        

if (ano2*10000 + mes2 * 100 + dia2 > ano1*10000 + mes1* 100 + dia1) 
{         
  cout << "A segunda data é maior que a primeira" << endl;    }
  else {        
    cout << "A primeira data é maior que a segunda" << endl;    
    }     
}