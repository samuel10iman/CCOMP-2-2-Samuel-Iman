#include <iostream>

using namespace std;

int main(){

    int a;

    cout << "Ingrese año: ";
    cin >> a;

    if ((a % 4) == 0)
    {
        if ((a % 100) == 0)
            if ((a % 400) == 0)
                cout << a << " es bisiesto ";
            else
                cout << "no es bisiesto";
        else
            cout << a << " es bisiesto ";
    }
    else
        cout << "no es bisiesto";

    return 0;
}

/**
 * 12345
 * 
 */