#include <iostream>

#define F first
#define S second
#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, k;
    cin >> n >> k;
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        if (ans * 2 > ans + k)
        {
            ans += k;
        }
        else
        {
            ans *= 2;
        }
    }
    cout << ans << endl;
    return 0;
}
