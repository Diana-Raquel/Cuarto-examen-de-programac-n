#include "iostream"
#define MAXIMO 100

using namespace std;

int funcion(); //Declarando funcion
int main()
{
    cout << endl << "ESTE PROGRAMA SACA EL PROMEDIO DE LOS ALUMNOS Y AVISA SI APROBARON O REPROBARON!" << endl << endl;
    cout << funcion();
    cout << "El programa ha finalizado" << endl;
}
int funcion()//Funcion que pide las notas
{
    float suma, num;
    string nombre[MAXIMO];
    int notas[MAXIMO][5], i, j, prom;
    cout << "Ingrese el numero de estudiantes:  ";
    cin >> num;
    for (i = 0; i < num; i++)
    {
        cout << "Nombre del estudiante numero " << i + 1 << ": ";
        cin >> nombre[i];
        for (j = 0; j < 5; j++)
        {
            cout << "Escriba la nota del examen de 1 a 10 " << j + 1 << ": ";
            cin >> notas[i][j];
        }
    }
    //mostrar array
    for (i = 0; i < num; i++)
    {
        suma = 0;
        cout << nombre[i];
        for (j = 0; j < 5; j++)
        {
            suma = suma + notas[i][j];
        }
        prom = suma * 0.20;

        if (prom >= 7)
            cout << " Aprobo! :D" << endl;
        else
            cout << " Reprobo :(" << endl;

        cout << "El promedio es: " << prom << endl << endl;
    }
    cout << endl;
}

