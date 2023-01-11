#include <iostream>

#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, a, b;
    cin >> n >> a >> b;
    int ans[2];

    ans[0] = min(a, b);
    if (a + b - n < 0)
    {
        ans[1] = 0;
    }
    else
    {
        ans[1] = a + b - n;
    }
    cout << ans[0] << " " << ans[1] << endl;
}
