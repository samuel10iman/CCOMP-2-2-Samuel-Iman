#include <iostream>
using namespace std;

int main(){
    /*long long*/ int num = 13195/*600851475143*/;
    int div = 1;
    int div_primo = 1;
    int suma_div = 0;
    int div_mayor;

    while (div <= num){
        if (num % div == 0){
            cout << div << endl;
            while (div_primo <= div)
            {
                if (div % div_primo == 0){
                    suma_div += 1;
                }
                if (suma_div == 2){
                    cout << div_primo << endl;
                    suma_div = 0;
                }
                div_primo += 1;
            }
            
        }
        div += 1;
    }

   // cout << div_mayor;

    return 0;
}