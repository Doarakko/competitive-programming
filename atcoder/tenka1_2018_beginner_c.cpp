#include <iostream>
#include <vector>

#define vsort(v) sort((v).begin(), (v).end())

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vsort(v);
    ll sum, ans;
    int x_idx, y_idx, N;

    x_idx = n - 1;
    y_idx = 0;
    sum = abs(v[n / 2] - v[n - 1]);
    if (n % 2 == 1 && n > 3)
    {
        N = n - 2;
    }
    else
    {
        N = n;
    }
    for (int i = 0; i < N; i++)
    {
        sum += abs(v[x_idx] - v[y_idx]);
        if (i % 2 == 0)
        {
            //            cout << v[x_idx] << ' ';
            x_idx--;
        }
        else
        {
            //            cout << v[y_idx] << ' ';
            y_idx++;
        }
    }
    //    cout << endl;
    ans = sum;

    x_idx = n - 1;
    y_idx = 0;
    sum = 0;
    // sum = abs(v[n/2] - v[n-1]);
    for (int i = 0; i < n; i++)
    {
        sum += abs(v[x_idx] - v[y_idx]);
        if (i % 2 == 0)
        {
            cout << v[y_idx] << ' ';
            y_idx++;
        }
        else
        {
            cout << v[x_idx] << ' ';
            x_idx--;
        }
    }
    cout << endl;
    ans = max(ans, sum);
    cout << ans << endl;
}
