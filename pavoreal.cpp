#include <iostream>
using namespace std; 
#include <iostream>
using namespace std;

struct infPavo
{
    string nombre;
    int peso; 
    int edad; 
    char sexo; 
};

int cantReproduc(int, infPavo[]);

int main()
{
    int cantPavos = 3; 
    struct infPavo pavos[cantPavos];

    cout << endl << "Ingrese la informacion de los pavos: " << endl; 

    for(int i = 0; i < cantPavos; i++)
    {
        cout << "Pavo " << i+1 << ": " << endl; 
        cout << "Ingrese el nombre: "; 
        cin >> pavos[i].nombre;
        cout << "Ingrese el peso (numero entero): ";
        cin >> pavos[i].peso; 
        cout << "Ingrese la edad (numero entero): ";
        cin >> pavos[i].edad;
        cout << "Ingrese el sexo (M/H): ";
        cin >> pavos[i].sexo;
    }

    cout << "Hay " << cantReproduc(cantPavos,pavos) << " pavo(s) que son capaces de tener hijos." << endl; 

    return 0; 
}

int cantReproduc(int cant, infPavo pavos[])
{
    int suma = 0; 
    
    for(int i = 0; i < cant; i++)
    {
        if(pavos[i].sexo == 'h' || pavos[i].sexo == 'H')
        {
            if(pavos[i].edad >= 2)
            {
                suma +=1; 
            }
        }
    }

    return suma; 
}
