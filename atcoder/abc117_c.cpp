#include <iostream>
#include <vector>

#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    vsort(v);

    vector<int> diff(m - 1);
    for (int i = 0; i < m - 1; i++)
    {
        diff[i] = abs(v[i] - v[i + 1]);
    }
    vsort(diff);
    int sum = 0;
    for (int i = 0; i < m - n; i++)
    {
        sum += diff[i];
    }
    cout << sum << endl;
}
