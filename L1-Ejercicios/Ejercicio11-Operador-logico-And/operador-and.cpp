#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 50;
    int b = 10;
    int c = 7;

    // if (a > b  && a > c)
    // {
    //     cout <<"a es el mayor " << a;
    // }else if (b > a && b > c)
    // {
    //     cout <<"b es el mayor ";
    // }else {
    //     cout <<"c es el mayor ";
    // }

    if (a > b  && a > c)
    {
        cout <<"a es el mayor: " << a;
    }
    if (b > a && b > c)
    {
        cout <<"b es el mayor: ";
    }
    if (c > a && c > b)
    {
        cout <<"c es el mayor: ";
    }

    return 0;
}
