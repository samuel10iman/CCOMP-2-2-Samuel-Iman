/* 2.23 Programa que identifique entre 5 números el mayor y el menor*/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, num4, num5;
    num1 = 1;
    num2 = 2;
    num3 = 3;
    num4 = 4;
    num5 = 5;

    if ((num1 < num2) && (num1 < num3) && (num1 < num4) && (num1 < num5))
    {
        cout << "Numero menor: " << num1 << endl;
    }
    else
    {
        if ((num2 < num3) && (num2 < num4) && (num1 < num5))
        {
            cout << "Numero menor: " << num2 << endl;
        }
        else
        {
            if ((num3 < num4) && (num3 < num5))
            {
                cout << "Numero menor: " << num3 << endl;
            }
            else
            {
                if (num4 < num5)
                {
                    cout << "Numero menor: " << num4 << endl;
                }
                else
                {
                    cout << "Numero menor: " << num5 << endl;
                }
            }
        }
    }

    if ((num1 > num2) && (num1 > num3) && (num1 > num4) && (num1 > num5))
    {
        cout << "Numero mayor: " << num1 << endl;
    }
    else
    {
        if ((num2 > num3) && (num2 > num4) && (num1 > num5))
        {
            cout << "Numero mayor: " << num2 << endl;
        }
        else
        {
            if ((num3 > num4) && (num3 > num5))
            {
                cout << "Numero mayor: " << num3 << endl;
            }
            else
            {
                if (num4 > num5)
                {
                    cout << "Numero mayor: " << num4 << endl;
                }
                else
                {
                    cout << "Numero mayor: " << num5 << endl;
                }
            }
        }
    }

    return 0;
}