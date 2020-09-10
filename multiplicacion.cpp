#include <iostream>
using namespace std;

int multiplicacion(int, int);

int main()
{
    int a, b;       //Numeros naturales
    cout << "Multiplicacion de NUMEROS NATURALES: " << endl << endl; 
    cout << "Ingrese el primer numero: "; 
    cin >> a; 
    cout << "Ingrese el segundo numero: ";
    cin >> b; 

    if(a < 1 || b < 1)
    {
        cout << "ERORR: No se introdujeron numeros naturales";
    }
    else
    {
       cout << "La multiplicacion es: " <<  multiplicacion(a, b);
    }
}

int multiplicacion(int a, int b)
{
    if(b == 1)
    {
        return a;
    }
    else
    {
        return a + multiplicacion(a, b-1);
    }
}