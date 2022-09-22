#include <iostream>
using namespace std;

int main(){
    int suma_cuadrados = 0;
    int suma_cuadrada = 0;
    int diferencia;
    for (int i = 0; i <= 100; i++){
        suma_cuadrados = suma_cuadrados + (i * i);
        suma_cuadrada = suma_cuadrada + i;
    }
    suma_cuadrada = suma_cuadrada * suma_cuadrada;
    cout << suma_cuadrados << endl;
    cout << suma_cuadrada << endl;
    diferencia = suma_cuadrada - suma_cuadrados;
    cout << diferencia;
}