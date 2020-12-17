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
    string s;
    cin >> s;
    bool flag = true;
    int cnt = 0, n = -1;
    if(s[0] == 'A'){
        for (int i = 2; i < s.length() - 1; i++) {
            if (s[i] == 'C') {
                cnt++;
                n = i;
            }
        }
        if(cnt == 1){
            for (int i = 1; i < s.length(); i++) {
                if(i != n){
                    if (!(s[i] >= 97 && s[i] <= 122)) {
                        flag = false;
                        break;
                    }
                }
            }
        }else{
            flag = false;
        }
    }else{
        flag = false;
    }
    if (flag) {
        cout << "AC" << endl;
    }else{
        cout << "WA" << endl;
    }
    return 0;
}
