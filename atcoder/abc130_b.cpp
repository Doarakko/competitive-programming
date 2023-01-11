#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, x, l, cnt = 1, d = 0;
    cin >> n >> x;

    for (int i = 0; i < n; i++)
    {
        cin >> l;
        d += l;
        if (d <= x)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}
