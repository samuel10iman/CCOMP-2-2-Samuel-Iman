/* 2.31 Costo por dia de Carpooling*/

#include <iostream>

using namespace std;

int main()
{
    int costo_galon_gasolina;                  //23so por galon (peru)
    int camino;
    int costo_peaje = 9;
    int cantidad_peajes;
    int km_recorridos_consume_galon;          //30km consumen 1 galon de gasolina
    int costo_estacionamiento;                //3so costo estacionamiento (peru)

    cout << "Carpooling" << endl;
    cout << "Ingrese su recorrido (en km): ";
    cin >> camino;
    cout << "Ingrese precio de galon de gasolina (en S/.): ";
    cin >> costo_galon_gasolina;
    cout << "Ingrese promedio de km recorridos por galon de gasolina: ";
    cin >> km_recorridos_consume_galon;
    cout << "Ingrese su tarifa de estacionamiento (en S/.): ";
    cin >> costo_estacionamiento;
    cout << "Ingrese cuantos peajes recorrera: ";
    cin >> cantidad_peajes;

    int galones_usados;
    int costo_total_viaje;

    galones_usados = camino / km_recorridos_consume_galon;          //halla cuantos galones se usaran en el viaje

    if (galones_usados == 0)
    {
        costo_total_viaje = 0;                      //si no se consume un galon, el costo del galon no afecta al total
    }
    else
    {
        costo_total_viaje = galones_usados * costo_galon_gasolina;   //al costo total se le añade el precio de x galones consumidos
    }

    costo_total_viaje = costo_total_viaje + (cantidad_peajes * costo_peaje);    //añade al costo total el monto de los peajes

    costo_total_viaje = costo_total_viaje + costo_estacionamiento;

    cout << "El costo total de su viaje sera: " << costo_total_viaje << " soles peruanos";

    return 0;
}