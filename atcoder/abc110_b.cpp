#include <iostream>
#include <vector>
#include <algorithm>

#define vsort(v) sort((v).begin(), (v).end())

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    vsort(a);
    vsort(b);
    bool flag = false;
    for (int i = x + 1; i <= y && !flag; i++)
    {
        if (i > a[n - 1] && i <= b[0])
        {
            flag = true;
        }
    }
    if (flag)
    {
        cout << "No War" << endl;
    }
    else
    {
        cout << "War" << endl;
    }
}
