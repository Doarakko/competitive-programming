#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    ll n;
    cin >> n;
    n %= 30;
    for (ll i = 0; i < n; i++)
    {
        swap(v[i % 5], v[i % 5 + 1]);
    }
    for (int i = 0; i < 6; i++)
    {
        cout << v[i];
    }
    cout << endl;
}
