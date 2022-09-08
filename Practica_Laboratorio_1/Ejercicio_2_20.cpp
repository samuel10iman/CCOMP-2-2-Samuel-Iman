/* 2.20 Hallar el diamettro, circunferencia y area de un circulo */

#include <iostream>

using namespace std;

int main()
{
    int radio;
    const float pi = 3.14159;

    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    int diametro = 2 * radio;
    int circunferencia = pi * diametro;
    int area = pi * (radio * radio);

    cout << "Diametro: "  << diametro << endl;
    cout << "Circunferencia: " << circunferencia<< endl;
    cout << "Area: " << area << endl;

    return 0;
}