#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    int n, SUM = 0;;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        SUM += v[i];
    }
    
    int ans = 0, cnt = 0;
    double sum = 0;
    if (SUM % n == 0) {
        int avg = SUM / n;
        for (int i = 0; i < n; i++) {
            sum += v[i];
            cnt++;
            if (sum / cnt == avg) {
                ans += cnt - 1;
                cnt = 0;
                sum = 0;
            }
        }
    }else{
        ans = -1; 
    }
    cout << ans << endl;
}
