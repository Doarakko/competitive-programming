#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, d, cnt = 0;
    cin >> n >> d;
    int a[n][d];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < d; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            double dis = 0;
            for (int k = 0; k < d; k++)
            {
                dis += pow(a[i][k] - a[j][k], 2);
            }
            dis = sqrt(dis);
            if (dis == (int)dis)
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}
