#include <iostream>
using namespace std;

int fib(int n){
    if ((n == 0) || (n == 1))
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int fib_it(int n){
    
}

int main(){
    int num;
    cin >> num;
    cout << fib(num);
}