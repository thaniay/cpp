#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion;
    cout << "Ingrese una opcion:";
    cin>> opcion;

    switch (opcion)
    {
    case 1:
    {
        cout <<"Escogistes 1" << endl;
        cout <<"Segunda linea opcion 1" << endl;
        break;
    }
    case 2:
        cout <<"Escogistes 2" << endl;
        break;
    case 3:
        cout <<"Escogistes 3" << endl;
        break;
    default:
    cout <<"Ingrese una opcion entre 1 y 3" << endl;
        break;
    }

    return 0;
}
