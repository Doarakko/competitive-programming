#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    string o, e;
    cin >> o >> e;
    int oc = 0, ec = 0;
    for (int i = 0; i < o.length() + e.length(); i++) {
        if (i % 2 == 0) {
            cout << o[oc];
            oc++;
        }else{
            cout << e[ec];
            ec++;
        }
    }
    cout << endl;
    return 0;
}
