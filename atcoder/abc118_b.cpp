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
    int k, a;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            cin >> a;
            v[a - 1]++;
        }
    }

    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        if (v[i] == n)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}
