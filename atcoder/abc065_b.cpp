#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    int a[n], x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a[i] = x;
    }
    int cur = 0, cnt = 1, tmp;
    while (a[cur] != -1 && a[cur] != 2)
    {
        tmp = cur;
        cur = a[cur] - 1;
        a[tmp] = -1;
        cnt++;
    }
    if (a[cur] == 2)
    {
        cout << cnt << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}
