/* 2.29 Imprimir una tabla con el area y volumen de un cubo con medidas de 0 a 4 cm*/

#include <iostream>

using namespace std;

int main()
{

    int arista1, arista2, arista3, arista4, arista5;
    int arista_evaluada;
    int area;
    int volumen;

    arista1 = 0;
    arista2 = 1;
    arista3 = 2;
    arista4 = 3;
    arista5 = 4;

    cout << "Arista       \tArea         \tVolumen" << endl;
    cout << "del cubo (cm)\tdel cubo (cm)\tdel cubo (cm)" << endl;
    
    arista_evaluada = arista1;
    area = 6 * (arista_evaluada * arista_evaluada);
    volumen = (arista_evaluada * arista_evaluada * arista_evaluada);
    cout << arista1 << "\t\t" << area << "\t\t" << volumen << endl;
    
    arista_evaluada = arista2;
    area = 6 * (arista_evaluada * arista_evaluada);
    volumen = (arista_evaluada * arista_evaluada * arista_evaluada);
    cout << arista2 << "\t\t" << area << "\t\t" << volumen << endl;
    
    arista_evaluada = arista3;
    area = 6 * (arista_evaluada * arista_evaluada);
    volumen = (arista_evaluada * arista_evaluada * arista_evaluada);
    cout << arista3 << "\t\t" << area << "\t\t" << volumen << endl;
    
    arista_evaluada = arista4;
    area = 6 * (arista_evaluada * arista_evaluada);
    volumen = (arista_evaluada * arista_evaluada * arista_evaluada);
    cout << arista4 << "\t\t" << area << "\t\t" << volumen << endl;
    
    arista_evaluada = arista5;
    area = 6 * (arista_evaluada * arista_evaluada);
    volumen = (arista_evaluada * arista_evaluada * arista_evaluada);
    cout << arista5 << "\t\t" << area << "\t\t" << volumen << endl;



    return 0;
}