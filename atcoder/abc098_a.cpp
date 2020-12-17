#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    int a, b;
    cin >> a >> b;
    vector<int> v(3);
    v[0] = a + b;
    v[1] = a - b;
    v[2] = a * b;
    sort(v.begin(), v.end());
    cout << v[2] << endl;
    return 0;
}
