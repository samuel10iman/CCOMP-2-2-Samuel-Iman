#include <iostream>
using namespace std;

int main(){
    for (int i = 2147483647 ; i > 0; i--){
        int lim_suma = 0;
        for (int j = 1; j <= 20; j++){
            if (i % j == 0){
                lim_suma += 1;
            }
        }
        if (lim_suma == 20){
            cout << i << " numero que se divide entre 1 al 20" << endl;
        }
    }
    return 0;
}