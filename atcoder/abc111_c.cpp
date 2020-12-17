#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
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

// A-Z: 65~90
// a-z: 97~122
// |a-z| = 26

using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    vector<int> a(n/2), b(n/2);
    for (int i = 0, j = 0, k = 0; i < n; i++) {
        if (i % 2 == 0) {
            cin >> a[j];
            j++;
        }else{
            cin >> b[k];
            k++;
        }
    }
    vsort(a);
    vsort(b);
    
//    for (int i = 0; i < a.size(); i++) {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//    for (int i = 0; i < b.size(); i++) {
//        cout << b[i] << " ";
//    }
//    cout << endl;
    
    int ans = 0;
    int cnt = 1;
    int a_max[2] = {-1, -1}, a_num[2] = {-1, -1};
    for (int i = 1; i < n / 2; i++) {
        if (a[i] == a[i-1]) {
            cnt++;
            if (i == n / 2 - 1) {
                if (a_max[0] < cnt) {
                    a_max[1] = a_max[0];
                    a_num[1] = a_num[0];
                    
                    a_max[0] = cnt;
                    a_num[0] = a[i];
                }else if(a_max[1] < cnt){
                    a_max[1] = cnt;
                    a_num[1] = a[i];
                }
            }
        }else{
            if (a_max[0] < cnt) {
                a_max[1] = a_max[0];
                a_num[1] = a_num[0];
                
                a_max[0] = cnt;
                a_num[0] = a[i];
            }else if(a_max[1] < cnt){
                a_max[1] = cnt;
                a_num[1] = a[i];
            }
            cnt = 1;
        }
    }
    

    cnt = 1;
    int b_max[2] = {-1, -1}, b_num[2] = {-1, -1};
    for (int i = 1; i < n / 2; i++) {
        if (b[i] == b[i-1]) {
            cnt++;
            if (i == n / 2 - 1) {
                if (b_max[0] < cnt) {
                    b_max[1] = b_max[0];
                    b_num[1] = b_num[0];
                    
                    b_max[0] = cnt;
                    b_num[0] = b[i];
                }else if(b_max[1] < cnt){
                    b_max[1] = cnt;
                    b_num[1] = b[i];
                }
            }
        }else{
            if (b_max[0] < cnt) {
                b_max[1] = b_max[0];
                b_num[1] = b_num[0];
                
                b_max[0] = cnt;
                b_num[0] = b[i];
            }else if(b_max[1] < cnt){
                b_max[1] = cnt;
                b_num[1] = b[i];
            }
            cnt = 1;
        }
    }
    
    if (a_num[0] == b_num[0]) {
        if (a_num[1] != -1 && b_num[1] != -1) {
            if ((n / 2 - a_max[0] + n / 2 - b_max[1]) > (n / 2 - a_max[1] + n / 2 - b_max[0])) {
                ans = n / 2 - a_max[1] + n / 2 - b_max[0];
            }else{
                ans = n / 2 - a_max[0] + n / 2 - b_max[1];
            }
        }else if(a_num[1] != -1 && b_num[1] == -1){
            ans = n / 2 - a_max[1] + n / 2 - b_max[0];
        }else if(a_num[1] == -1 && b_num[1] != -1){
            ans = n / 2 - a_max[0] + n / 2 - b_max[1];
        }else{
            ans = n / 2;
        }
        
    }else{
        ans = n / 2 - a_max[0] + n / 2 - b_max[0];
    }
    cout << ans << endl;
}
