#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
 
int opcion=0;

while (true)
{
    system("cls");
   
    cout << "**************" <<endl;
    cout << "MENU DE JUEGOS" <<endl;
    cout << "**************" <<endl;
    cout << endl;
    cout << "Seleccione un juego" <<endl;
    cout << endl;

    cout << "1 - StarShip" << endl;
    cout << "2 - Snake" << endl;
    cout << "0 - Salir" << endl;

    cout << endl;
    cout << "Ingrese un numero del menu para seleccionar un juego: ";
    cin >> opcion;   

    if (opcion == 0)
    {
        cout << endl;
        cout << "SALISTES DEL MENU";
        break;
    }
    
    switch (opcion)
    {
    case 1:
        system("cls");
        starShip();
        break;

    case 2:
        system("cls");
        snake();
        break;


    default:
        break;   
       
    
    }
    
}
 return 0;
    
}
