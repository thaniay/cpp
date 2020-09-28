#include <iostream>

using namespace std;
int sumar(int a, int b){
    return a + b;
}

int resta(int a, int b){
    return a - b;
}

int multiplicacion(int a, int b){
    return a * b;
}

int divicion(int a, int b){
    if (b == 0){
        throw"No se puede dividir entre 0";
;    }
    return a / b;
}

int calculadora(int a, int b, char operador){
    switch (operador)
    {
    case '+':
        return sumar(a, b);
        break;
    case '-':
        return resta(a, b);
        break;
    case '*':
        return multiplicacion(a, b);
        break;
    case '/':
        return divicion(a, b);
        break;
    
    default:
        break;
    }
    throw "El operador no existe";
}

int main(int argc, char const *argv[])
{
    system ("cls");
   
    int n1 = 0;
    int n2 = 0;
    int resultado = 0;
    char operador;

    cout <<"Ingrese a: ";
    cin >>n1;
    cout <<"Ingrese b: ";
    cin >>n2;
    cout <<"Ingrese el operador( +, -, *, /): ";
    cin >>operador;

    cout << endl;

    try
    {
        resultado = calculadora(n1, n2, operador);
        cout <<"Resultado de " << n1 << " " << operador <<" " << n2 << " es: ";
        cout <<resultado;  
    }
    catch(const char* error)
    {
        cout << error;
    }


    return 0;
}
