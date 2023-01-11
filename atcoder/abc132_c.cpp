#include <iostream>
#include <vector>

#define VSORT(v) sort(v.begin(), v.end())

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    VSORT(v);
    cout << v[n / 2] - v[n / 2 - 1] << endl;
}
