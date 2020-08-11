#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    system ("cls");
    cout <<"***********************" << endl;
    cout <<"     JUEGO DE DADOS     " << endl;
    cout <<"***********************" << endl;
    cout << endl;
    cout << endl;

    int primerDado=0;
    int segundoDado=0;
    int suma = 0;

    srand(time(NULL));

    for (int i = 1; i < 2; i++)
    {
        primerDado = rand() % 6 + 1;
        segundoDado = rand() % 6 + 1;
        suma = primerDado + segundoDado;
        cout << "Primer Dado: " << primerDado << endl;
        cout << "Segundo Dado: " << segundoDado<< endl;
        cout << "La suma de los dados es: " << suma << endl;
        cout << endl;
        cout << endl;
     
    }

    return 0;
}