#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    double numero = 0;
    double raizCuadrada= 0;
    
    system ("cls");
    cout << "Ingrese un numero: ";
    cin>> numero; 
    
    cout << endl;

    raizCuadrada= sqrt(numero);
    
    cout << "La raiz cuadrada es : " << raizCuadrada << endl;

    return 0;
}