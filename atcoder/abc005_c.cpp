#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int t, n, m;
    vector<int> a(n);

    cin >> t >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int idx = 0;
    bool flag;
    for (int i = 0; i < m; i++)
    {
        flag = false;
        for (int j = idx; j < n; j++)
        {

            if (b[i] - a[j] <= t && b[i] - a[j] >= 0)
            {
                idx++;
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            break;
        }
    }
    if (flag)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}
