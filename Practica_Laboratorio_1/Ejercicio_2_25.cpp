/* 2.25 De tres números identificar e imprimir si el primer y segundo número son divisores del segundo? */

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;

    num1 = 2;
    num2 = 4;
    num3 = 9;

    if ((num2 % num1 == 0) && (num2 % num2 == 0))
    {
        cout << num1 << " y " << num2 << " son divisores de " << num2;
    }
    else if ((num2 % num1 == 0) || (num2 % num2 == 0))
    {
        if (num2 % num1 == 0)
        {
            cout << "Solo " << num1 << " es divisor de " << num2;
        }
        else if (num2 % num2 == 0)
        {
            cout << "Solo " << num2 << " es divisor de " << num2;
        }
    }
    else
    {
        cout << "Ninguno de los dos numeros son divisores de " << num2;
    }

    return 0;
}