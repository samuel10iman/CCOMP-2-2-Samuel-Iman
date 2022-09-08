#include <iostream>

using namespace std;

int main(){

    int a;
    int b = 5;

    cout << "Ingrese numero: ";
    cin >> a;

    //int num_digitos = 5;

    //if

    if (a / 10000 == 0)
    {
        if (a / 1000 == 0)
        {
            if (a / 100 == 0)
            {
                if (a / 10 == 0)
                {
                    b = 10;
                }
                else
                    cout << a / 10 << endl;
                    a = a % 10;
                    cout << a / 1 << endl;
            }
            else
            { 
                cout << a / 100 << endl;
                a = a % 100;
                cout << a / 10 << endl;
                a = a % 10;
                cout << a / 1 << endl;
            }
        }
        else
        {
            cout << a / 1000 << endl;
            a = a % 1000;
            cout << a / 100 << endl;
            a = a % 100;
            cout << a / 10 << endl;
            a = a % 10;
            cout << a / 1 << endl;
        }
        

    }
    else
    {
        cout << a / 10000 << endl;
        a = a % 10000;
        cout << a / 1000 << endl;
        a = a % 1000;
        cout << a / 100 << endl;
        a = a % 100;
        cout << a / 10 << endl;
        a = a % 10;
        cout << a / 1 << endl;
    }


    return 0;
}