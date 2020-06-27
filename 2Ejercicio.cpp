/*Calcule el promedio de estatura de una clase de 25 alumnos. Decir cuantos se encuentran arriba de la media y cuantos debajo de la media.*/

#include "iostream"
#include "stdio.h"
#include "stdio.h"

using namespace std;

int main()
{
    int promedio;
    int estatura[25];
    int suma = 0;
    int i, contador = 0;

    for (i = 0; i < 25; i++)
    {
        cout << "Ingrese la estatura en centimetor del alumno: " << i + 1 << ": " << endl;
        cin >> estatura[i];
        suma = suma + estatura[i];
    }
    promedio = suma / 25;
    i++;


    cout << "El promedio de las estaturas es: " << promedio << endl;

    if ((estatura[i] <= 160) || (estatura[i]>=200))
    {
        i++;
        cout << "Los que se encuentran arriba de la media son: " << i << endl;
    }
    if ((estatura[i] <=100) || (estatura[i]>=159))
    {
        i++;
        cout << "Los que se encuentran debajo de la media son: " << i << endl;
    }

    return 0;
}