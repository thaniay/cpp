#include <iostream>

using namespace std;

double subtotal;
double total = 0;
double impuesto = 0.15;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
    impuesto = (subtotal * 0.15);
    total = subtotal + (subtotal * 0.15);
}

void imprimirFactura()
{
    system("cls");
    cout << "*******" << endl;
    cout << "FACTURA" << endl;
    cout << "*******" << endl;
    cout << endl;

    cout << "Productos:" << endl;
    cout << listaProductos;

    cout << endl;
    cout << "Subtotal: " << subtotal << endl;
    cout << "Impuesto: " << impuesto << endl;
    cout << "Total a pagar: " << total << endl;
    cout << endl;
    cout << endl;
    system("pause");
}