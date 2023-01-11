#include <iostream>

#define F first
#define S second
#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, m;
    cin >> n >> m;
    pair<int, int> p;
    vector<pair<int, int>> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> p.S >> p.F;
        v[i] = p;
    }
    vsort(v);

    int cnt = 1, tmp = v[0].first;
    for (int i = 0; i < m; i++)
    {
        if (v[i].second >= tmp)
        {
            cnt++;
            tmp = v[i].first;
        }
    }
    cout << cnt << endl;
    return 0;
}
