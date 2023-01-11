#include <iostream>
#include <vector>

using namespace std;
int main(int argc, const char *argv[])
{
    int l, h, n;
    cin >> l >> h >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] >= l && v[i] <= h)
        {
            cout << 0 << endl;
        }
        else if (v[i] >= h)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << l - v[i] << endl;
        }
    }
}
