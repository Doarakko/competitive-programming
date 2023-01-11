#include <iostream>
#include <vector>

#define F first
#define S second
#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, x;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v[i] = x;
    }
    vsort(v);
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] > v[i - 1])
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
