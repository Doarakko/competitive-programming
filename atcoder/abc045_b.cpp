#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#include <climits>

#define X first
#define Y second
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
    vector<string> v(3);
    for (int i = 0; i < 3; i++) {
        cin >> v[i];
    }
    int cnt[3] = {0, 0, 0}, num = 0;
    while (1) {
        if (cnt[num] == v[num].length()) {
            break;
        }
        if (v[num][cnt[num]] == 'a') {
            cnt[num]++;
            num = 0;
        }else if(v[num][cnt[num]] == 'b'){
            cnt[num]++;
            num = 1;
        }else{
            cnt[num]++;
            num = 2;
        }
    }
    if (num == 0) {
        cout << 'A' << endl;
    }else if(num == 1){
        cout << 'B' << endl;
    }else{
        cout << 'C' << endl;
    }
}
