#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    int N;
    cin >> N;
    
    ll a;
    vector<ll> v(N);
    bool flag = true;
    int min = 100;
    for (int i = 0; i < N; i++) {
        cin >> a;
        if(a % 2 == 1){
            flag = false;
        }
        v[i] = a;
    }
    
    if(flag){
        for (int i = 0; i < N; i++) {
            int cnt = 0;
            while(v[i] % 2 == 0){
                v[i] = v[i] / 2;
                cnt++;
            }
            if(cnt < min){
                min = cnt;
            }
        }
    }else{
        min = 0;
    }
    cout << min << endl;
    
    return 0;
}
