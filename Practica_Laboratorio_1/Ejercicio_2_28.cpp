/* 2.28 Imprimir los 4 digitos de un numero ingresado por teclado, y que a su vez se imprima al revés*/

#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Ingrese un numero de CUATRO digitos: "; 
    cin >> num;

    int dig1, dig2, dig3, dig4;

    if (num / 1000 != 0)
    {
        dig4 = num / 1000;
        num = num % 1000;
        if (num / 100 != 0)
        {
            dig3 = num / 100;
            num = num % 100;
            if (num / 10 != 0)
            {
                dig2 = num / 10;
                num = num % 10;
                dig1 = num;
            }
        }
    }

    cout << dig1 << "  " << dig2 << "  " << dig3 << "  " << dig4 << endl;

    return 0;
}