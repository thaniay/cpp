#include <iostream>

using namespace std;

int main(int argc, char const *argv[])

{   // Datos de entrada 
    double subtotal = 0;
    double total = 0;
    double impuestos = 0.15;
    cout << "Ingrese el subtotal de la factura: "; 
    cin >> subtotal;
    // Proceso
    total = subtotal + (subtotal * 0.15);
    // Salida

    cout << endl;
    cout <<"Total a pagar es:" << total;
    return 0;
}
