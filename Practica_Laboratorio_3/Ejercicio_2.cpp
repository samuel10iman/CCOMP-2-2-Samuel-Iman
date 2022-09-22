#include <iostream>
using namespace std;

int main(){
    int num_fib1 = 1;
    int num_fib2 = 2;
    int new_fib;
    //int cont = 0;
    int sum = 2;

    cout << num_fib1 << endl;
    cout << num_fib2 << endl;

    while (new_fib < 4000000){
        new_fib = num_fib1 + num_fib2;
        cout << new_fib << endl;
        //sum = sum + new_fib;
        num_fib1 = num_fib2;
        num_fib2 = new_fib;
        if (new_fib % 2 == 0){
            sum = sum + new_fib;
        }
        //cont = cont + 1;
    }

    cout << "Suma de terminos pares: " << sum;
    
    return 0;
}