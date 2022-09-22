#include <iostream>
using namespace std;

int main(){
    long long int num = 600851475143;
    int div = 1;
    int div2;
    

    while (div <= num){
        if (num % div == 0){
           // cout << "Divisor: " << div << endl;
            div2 = 1;
            int suma_div2 = 0;
            while (div2 <= div){
                if (div % div2 == 0){
                    //cout << "Divisores de " << div << ":" << endl;
                    //cout << div2 << endl;
                    suma_div2 += 1;
                }
                div2 += 1;
            }
            if (suma_div2 == 2){
                cout << div << " es primo" << endl;
            }                
        }
        div += 1;
    }
        return 0;       
}