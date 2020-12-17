#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    vector<string> v;
    string s;
    
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> s;
        v.push_back(s);
    }
    //昇順ソート
    sort(v.begin(), v.end());
    //出力
    cout << v[0] << endl;
}
