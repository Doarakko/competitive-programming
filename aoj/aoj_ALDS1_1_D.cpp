#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int minv = v[0], ans = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (v[i] - minv > ans)
        {
            ans = v[i] - minv;
        }
        minv = min(v[i], minv);
    }

    cout << ans << endl;
}
