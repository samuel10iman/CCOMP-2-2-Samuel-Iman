#include <iostream>
using namespace std;

int main(){
    int max = 1000000;
    int suma_primo = 0;
    for (int i = 1; i < max; i++){
        int suma = 0;
        for (int j = 1; j <= i; j++){
            if (i % j == 0){
                suma += 1;
            }
        }
        if (suma == 2){
            //cout << i << " es primo" << endl;
            suma_primo = suma_primo + i;
        }
    }
    cout << "La suma de los primos debajo de " << max << " es: " << suma_primo;
    return 0;
}

/*
FUNCION PARA SABER SI ES PRIMO:
bool esPrimo(long long n) {
    long long factor = 2;
    while (factor <= n/2) {
        if (!(n % factor)){
            return false;
        }
        factor++;
    }
    return true;
}*/