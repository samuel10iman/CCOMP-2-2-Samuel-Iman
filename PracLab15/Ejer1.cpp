#include <iostream>
using namespace std;

int main(){
    int cont = 0;
    int sum= 0;

    while (cont < 1000){
        if ((cont % 3 == 0) || (cont % 5 == 0)){
            sum = sum + cont;
        }
        cont += 1;
    }

    cout << "Suma: " << sum;
    
    return 0;
}