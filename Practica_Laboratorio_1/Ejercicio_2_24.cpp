/* 2.24 Determinar si 2 números son par o impar además de halla si la suma es par o impar */

#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    num1 = 4;
    num2 = 7;

    if (num1 % 2 == 0)
    {
        cout << num1 << " es par" << endl;
    }
    else
    {
        cout << num1 << " es impar" << endl;
    }

    if (num2 % 2 == 0)
    {
        cout << num2 << " es par" << endl;
    }
    else
    {
        cout << num2 << " es impar" << endl;
    }

    int suma = num1 + num2;

    if (suma % 2 == 0)
    {
        cout << "La suma de ambos numeros es " << suma << " que es un numero par" << endl;
    }
    else
    {
        cout << "La suma de ambos numeros es " << suma << " que es un numero impar" << endl;
    }

    return 0;
}