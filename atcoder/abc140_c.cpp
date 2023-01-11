#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n;
    vector<int> a(n), b(n - 1);

    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> b[i];
    }

    a[0] = b[0];
    a[n - 1] = b[n - 2];
    for (int i = 1; i < n - 1; i++)
    {
        a[i] = min(b[i], b[i - 1]);
    }

    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << sum << endl;
}
