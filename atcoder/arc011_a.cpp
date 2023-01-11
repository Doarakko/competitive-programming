#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, m, N;
    cin >> m >> n >> N;

    int collect, ans = N;
    for (; N >= m;)
    {
        collect = (N / m) * n;
        ans += collect;

        N = collect + N % m;
    }
    cout << ans << endl;
}
