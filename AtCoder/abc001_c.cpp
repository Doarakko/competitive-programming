#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    double deg, dis;
    cin >> deg >> dis;
    
    // 風向き
    vector<string> dirs = {"NNE", "NE", "ENE", "E", "ESE", "SE", "SSE", "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW", "N"};
    string dir;
    deg /= 10;
    int n = (deg - 11.25) / 22.5;
    if (n >= 16) {
        n = 15;
    }
    dir = dirs[n];
    
    // 風力
    vector<double> v = {0.2, 1.5, 3.3, 5.4, 7.9, 10.7, 13.8, 17.1, 20.7, 24.4, 28.4, 32.6};
    int w = 12;
    
    for (int i = 0; i < v.size(); i++) {
        if (dis < (v[i] + 0.05) * 60) {
            w = i;
            break;
        }
    }
    
    if (w == 0) {
        dir = "C";
    }
    cout << dir << ' ' << w << endl;
}


