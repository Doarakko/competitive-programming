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

using namespace std;
int main(int argc, const char * argv[]) {
    vector<string> v(4);
    string s;
    char c;
    for (int i = 0; i < 4; i++) {
        s.clear();
        for (int j = 0; j < 4; j++) {
            cin >> c;
            s += c;
        }
        vrev(s);
        v[i] = s;
    }
    
    for (int i = 3; i >= 0; i--) {
        for (int j = 0; j < 4; j++) {
            cout << v[i][j];
            if (j < 3) {
                cout << ' ';
            }else{
                cout << endl;
            }
        }
    }
}
