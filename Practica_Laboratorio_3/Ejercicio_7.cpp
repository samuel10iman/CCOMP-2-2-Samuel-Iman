#include <iostream>
using namespace std;

int main(){
    int max = 2147483647;
    int div;
    int cont = 0;
    for (int i = 1; i <= max; i++){
        int suma = 0;
        for (int j = 1; j <= i; j++){
            div = i % j;
            //cout << i << " % " << j << " = " << div << endl;
            if (i % j == 0){
                suma += 1;
            }
        }
        if (suma == 2){
            cont += 1;
            //cout << i << " es primo" << endl;
            if (cont == 10001){
                cout << i;
                break;
            }
        }
    }
}