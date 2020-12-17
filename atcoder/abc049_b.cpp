#include <iostream>
#include <vector>
using namespace std;

int main() {
    int h, w;
    vector<string> v;
    string s;
    
    //入力
    cin >> h >> w;
    for (int i = 0; i < h; i++) {
        cin >> s;
        v.push_back(s);
    }
    
    //出力
    for (int i = 0; i < h; i++) {
        cout << v[i] << endl;
        cout << v[i] << endl;
    }
    
    return 0;
}
