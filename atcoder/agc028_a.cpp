#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

#define X first
#define Y second
#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;

// 最大公約数
int gcd(int x, int y){
    int r;
    
    // 引数チェック
    if(x == 0 || y == 0){
        return 0;
    }
    
    // ユーグリッドの互除法
    // yで割り切れるまでループ
    while((r = x % y) != 0){
        x = y;
        y = r;
    }
    return y;
}

// 最小公倍数
int lcm(int x, int y){
    if(x == 0 || y == 0){
        return 0;
    }
    return (x * y / gcd(x, y));
}

int main(int argc, const char * argv[]) {
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    
    int l = lcm(n, m);
    
}
