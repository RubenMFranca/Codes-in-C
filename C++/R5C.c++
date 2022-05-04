#include<iostream>
using namespace std;

int main(){
  float ladoa, ladob, ladoc;

  cout<<"\nDigite valor a: ";
  cin>>ladoa;
  cout<<"\nDigite valor b: ";
  cin>>ladob;
  cout<<"\nDigite valor c: ";
  cin>>ladoc;
    if(ladoa!=ladob && ladob!=ladoc)
      cout<<"\nTriangulo escaleto.";
    if(ladoa==ladob && ladob==ladoc)
      cout<<"\nTriangulo equilatero.";
  else if(ladoa==ladob && ladob!=ladoc)
      cout<<"\nTriangulo isoceles.";
  cout<<"\n\n";
  system("pause");
  return 0;
  }
  