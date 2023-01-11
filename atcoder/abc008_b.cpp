#include <iostream>
#include <vector>

#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;
int main(int argc, const char *argv[])
{
    int n;
    cin >> n;

    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vsort(v);

    int cnt = 1, max = 1;
    string ans = v[0];
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            cnt++;
            if (cnt > max)
            {
                ans = v[i];
                max = cnt;
            }
        }
        else
        {
            cnt = 1;
        }
    }
    cout << ans << endl;
}
