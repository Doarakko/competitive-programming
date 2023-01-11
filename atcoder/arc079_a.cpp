#include <iostream>
#include <map>

using namespace std;

int main(int argc, const char *argv[])
{
    int n, m, a, b;
    cin >> n >> m;
    map<int, bool> x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        if (a == 1)
        {
            x[b] = true;
        }
        else if (a == n)
        {
            x[b] = true;
        }
        if (b == 1)
        {
            y[a] = true;
        }
        else if (b == n)
        {
            y[a] = true;
        }
    }

    for (int i = 2; i < n; i++)
    {
        if (x[i] && y[i])
        {
            cout << "POSSIBLE" << endl;
            return 0;
        }
    }
    cout << "IMPOSSIBLE" << endl;
}
