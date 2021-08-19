/**************************
1. Realiza una funcion que tome como parametro un numero real y devuelva su valor
absoluto.
***************************/

#include <iostream>

using namespace std;
double maximo(double x)
{
   if(x)
        return x;
   return x;
}


int main()
{
    double a,b;
    cout<<"Ingrese Numero 1: ";
    cin>>a;
    cout<<"El Maximo es: "<<maximo(a)<<endl;
}
void f(int *p, float *q)
{
 printf("Al entrar en f, *p (= entero) vale %d y *q (= real) vale %6.2f\n", *p, *q);

 *p = 7777;
 *q = 12345.67;


 printf("Al salir de f, *p vale %d y *q vale %6.2f\n", *p, *q);
 return;
}
