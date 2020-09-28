#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    system ("cls");
    int suma=0;
    int numero[5][5];
    
    cout <<"ARREGLO BIDIMENSIONAL 5X5" << endl << endl;
    
    // inicializa el numero random
    srand(time(NULL));

     for (int i = 0; i < 5; i++) 
   {
      for (int  j = 0; j < 5; j++)
      {
             numero[i][j]= rand() % 9 + 1;
            cout << "|" << numero[i][j] << "|" << " ";
             suma=suma + numero[i][j];
      }
        cout << endl;
   }
    cout << endl;
    cout <<"Total suma: " << suma << endl;
    return 0;
}

