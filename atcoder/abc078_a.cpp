#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

#define F first
#define S second
#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    char x, y;
    cin >> x >> y;
    if (x > y) {
        cout << '>' << endl;
    }else if(x < y){
        cout << '<' << endl;
    }else{
        cout << '=' << endl;
    }
    return 0;
}
