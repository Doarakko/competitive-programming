#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#include <climits>

#define F first
#define S second
#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())


//INT_MAX
//INT_MIN
//LLONG_MAX
//LLONG_MIN
//DBL_MIN
//DBL_MAX
//LDBL_MIN
//LDBL_MAX

using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    int w, h, n;
    cin >> w >> h >> n;
    int x, y, a;
    int max_x, min_x, max_y, min_y;
    max_x = w;
    min_x = 0;
    max_y = h;
    min_y = 0;
    for (int i = 0; i < n; i++) {
        cin >> x >> y >> a;
        if (a == 1 && min_x < x) {
            min_x = x;
        }else if (a == 2 && max_x > x){
            max_x = x;
        }else if (a == 3 && min_y < y){
            min_y = y;
        }else if(a == 4 && max_y > y){
            max_y = y;
        }
    }
    if(max_x - min_x < 0 || max_y - min_y < 0){
        cout << 0 << endl;
    }else{
        cout << (max_x - min_x) * (max_y - min_y) << endl;
    }
}
