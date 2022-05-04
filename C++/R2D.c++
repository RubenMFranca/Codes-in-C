#include <iostream>

using namespace std;

int main()
    {
    float a, b, c, delta, x1, x2, soma;
    cout<<"digite o valor de a";
    cin >>a;

    cout<< "digite o valor de b ";
    cin>>(b);

    cout << ("c = ");
    cin>>(c);

    soma =  - 4 *( a * c);
    delta = -(b^2) - soma;

    if(delta < 0);{
        cout <<("DELTA = ", delta);
        cout <<("Não existem raízes reais!");
    }else if(delta = 0){

        x1 <- (-b - raizq(delta)) / (2 * a)
        x2 <- (-b + raizq(delta)) / (2 * a)
        cout("x' = ", x1:6:2);
        cout("x'' = ", x2:6:2);
    }else {
        x1 <- (-b - raizq(delta)) / (2 * a)
         x2 <- (-b + raizq(delta)) / (2 * a)
        cout("x' = ", x1:6:2);
        cout("x'' = ", x2:6:2);
    }
    }