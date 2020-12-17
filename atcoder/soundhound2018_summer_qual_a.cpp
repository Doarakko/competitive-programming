#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    int a, b;
    cin >> a >> b;
    if(a + b == 15){
        cout << '+' << endl;
    }else if(a * b == 15){
        cout << '*' << endl;
    }else{
        cout << 'x' << endl;
    }
    return 0;
}
