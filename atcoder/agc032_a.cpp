#include <iostream>
#include <vector>

#define vrev(v) reverse(v.begin(), v.end())

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])

{
    int n;
    cin >> n;
    vector<int> v(n + 1), ans;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] == i + 1)
        {
            ans.push_back(v[i]);
            v.erase(v.begin() + i);
            i = v.size() - 1;
        }
    }
    vrev(ans);
    if (ans.size() == n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << endl;
        }
    }
    else
    {
        cout << -1 << endl;
    }
}
