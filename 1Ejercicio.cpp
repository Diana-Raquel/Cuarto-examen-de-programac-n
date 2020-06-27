#include "iostream"
#include "conio.h"
#include "stdio.h"

using namespace std;

int main(int argc, char *argv[])
{
    char palabra[100];
    cout << "Intruzca texto: " << endl;
    gets(palabra); //Para que lea la frase completa

    int i = 0;
    while (palabra[i] != '\0') //Ciclo que revisara letra por letra la frase
    {
        if (palabra[i] == 'M' || palabra[i] == 'm')
            palabra[i] = '0';
        if (palabra[i] == 'U' || palabra[i] == 'u')
            palabra[i] = '1';
        if (palabra[i] == 'R' || palabra[i] == 'r')
            palabra[i] = '2';
        if (palabra[i] == 'C' || palabra[i] == 'c')
            palabra[i] = '3';
        if (palabra[i] == 'I' || palabra[i] == 'i')
            palabra[i] = '4';
        if (palabra[i] == 'E' || palabra[i] == 'e')
            palabra[i] = '5';
        if (palabra[i] == 'L' || palabra[i] == 'l')
            palabra[i] = '6';
        if (palabra[i] == 'A' || palabra[i] == 'a')
            palabra[i] = '7';
        if (palabra[i] == 'G' || palabra[i] == 'g')
            palabra[i] = '8';
        if (palabra[i] == 'O' || palabra[i] == 'o')
            palabra[i] = '9';
        i++;
    }
    cout << "Su nueva palabra es: " << palabra << endl;
    return 0;
}