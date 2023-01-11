#include <iostream>
#include <vector>

using namespace std;
int main(int argc, const char *argv[])
{
    int n, m, c;
    cin >> n >> m >> c;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }

    int cnt = 0, sum, a;
    for (int i = 0; i < n; i++)
    {
        sum = c;
        for (int j = 0; j < m; j++)
        {
            cin >> a;
            sum += a * v[j];
        }
        if (sum > 0)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}
