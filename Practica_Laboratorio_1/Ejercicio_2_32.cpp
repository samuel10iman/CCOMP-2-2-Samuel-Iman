/* 2.32 Calculadora de frecuencia cardiaca maxima*/

#include <iostream>

using namespace std;

int main()
{
    int edad;
    int mhr;
    int mhr2;
    int mhr3;
    int mhr4;

    cout << "Ingrese su edad: ";
    cin >> edad;

    mhr = 220 - edad;
    mhr2 = 208 - (0.7 * edad);
    mhr3 = 207 - (0.7 * edad);
    mhr4 = 211 - (0.64 * edad);

    cout << "La frecuencia cardiaca MAXIMA (segun la ecuacion comun) es de: " << mhr << " latidos por minuto" << endl;
    cout << "La frecuencia cardiaca MAXIMA (segun la ecuacion de Tanaka) es de: " << mhr2 << " latidos por minuto" << endl;
    cout << "La frecuencia cardiaca MAXIMA (segun la ecuacion de Gellish) es de: " << mhr3 << " latidos por minuto" << endl;
    cout << "La frecuencia cardiaca MAXIMA (segun la ecuacion de Nes) es de: " << mhr4 << " latidos por minuto" << endl;

    cout << "--------------------------------------------------------------------------------------\nSu frecuencia cardiaca deberia oscilar entre los 60 y 100 latidos por minuto";

    return 0;
}