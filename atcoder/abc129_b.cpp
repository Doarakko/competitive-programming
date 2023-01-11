#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    vector<int> v(n), w(n);
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }

    v[0] = w[0];
    for (int i = 1; i < n; i++)
    {
        v[i] = v[i - 1] + w[i];
    }

    int ans = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        ans = min(ans, abs((v[n - 1] - v[i]) - v[i]));
    }
    cout << ans << endl;
}
