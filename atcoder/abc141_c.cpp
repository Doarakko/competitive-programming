#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> r(n);
    int x;
    for (int i = 0; i < q; i++)
    {
        cin >> x;
        r[x - 1]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (k - (q - r[i]) > 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
