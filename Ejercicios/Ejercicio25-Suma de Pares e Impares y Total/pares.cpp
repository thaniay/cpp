#include <iostream>
   
using namespace std;
   
int main(int argc, char** argv) {
	
    int pares = 0;
    int impares= 0;
    
	for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0){
            pares = pares + i;
        }

        if (i % 2 == 1){
            impares = impares + i;
        }

        cout << i << " ";
    }

    cout << endl;
    cout << endl;
    cout << "Pares: " << pares ;
    cout << endl;
    cout << "Impares: " << impares;
    cout << endl;
    cout << "Total: " << pares + impares;

    return 0;
}