#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int a=0;
	int b=0;
	int suma= 0;
	int resta=0;
	int multiplicacion=0;
	int divicion=0;
	
	cout <<"Ingrese el valor a:";
	cin >> a;
	
	cout <<endl;
	
	cout <<"Ingrese el valor b:";
	cin >> b;
	
	
	suma= a + b;
	resta= a - b;
	multiplicacion= a * b;
	divicion= a / b;

	cout <<endl;
	cout <<"La suma de a + b es:"<< suma;
	
	cout <<endl;
	cout <<"La resta de a - b es:"<< resta;
	
	cout <<endl;
	cout <<"La multiplicacion de a * b es:"<< multiplicacion;
	
	cout <<endl;
	cout <<"La divicion entre a / b es:"<< divicion;
	
	
	return 0;
}