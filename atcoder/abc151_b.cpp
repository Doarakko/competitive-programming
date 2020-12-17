#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    int n, k, m;
    cin >> n >> k >> m;

    int sum = 0, x;
    for (int i = 1; i <= n - 1; i++)
    {
        cin >> x;
        sum += x;
    }

    x = n * m - sum;
    if (x <= k)
    {
        cout << max(x, 0) << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}