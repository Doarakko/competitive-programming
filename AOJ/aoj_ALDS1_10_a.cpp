#include <iostream>
using namespace std;

int fib(int n);

int main() {
    int n, input;
    int fib[50];
    
    //初期化
    fib[0] = 1;
    fib[1] = 1;
    n = 2;
    
    cin >> input;
    
    //メモ化再帰
    while(n <= input){
        fib[n] = fib[n-2] + fib[n-1];
        n++;
    }
    cout << fib[input] << endl;
}
