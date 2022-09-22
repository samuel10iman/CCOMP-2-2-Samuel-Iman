#include <iostream>
using namespace std;

int main(){
    int num;
    int n_comp;
    int n_mayor = 0;
    //int n_pivot;
    for (int i = 100; i <= 999; i++){
        for (int j = 100; j <= 999; j++){
            num = i * j;
            n_comp = num;
            //cout << i << " x " << j << " = " << num << endl;
            int num_invertido = 0;
            while (num > 0){
                num_invertido = num_invertido + num % 10;
                num_invertido = num_invertido * 10;
                num = num / 10;               
            }
            if (n_comp == (num_invertido / 10)){
                cout << "Es palindromo" << endl;
                cout << n_comp << endl;
            }
            if (n_comp > n_mayor){
                n_mayor = n_comp;
            }
        }
    }
    cout << "el palindromo mayor es " << n_mayor;
    return 0;
}