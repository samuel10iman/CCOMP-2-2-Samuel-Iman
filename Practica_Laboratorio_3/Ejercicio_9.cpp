#include <iostream>
using namespace std;

int main(){
    int suma;
    for (int c = 3; c <= 997; c++){
        for (int b = 2; b < c; b++){
            for (int a = 1; a < b; a++){
                //cout << a << "\t" << b << "\t" << c << endl;
                if (((a * a) + (b * b)) == (c * c)){
                    suma = a + b + c;
                    if (suma == 1000){
                        cout << a << "\t" << b << "\t" << c << "\tSuma: " << suma << endl;
                        cout << "Producto: " << a * b * c;
                    }
                }
            }
        }
    }
    return 0;
}