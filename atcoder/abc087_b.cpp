#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    int sum, cnt = 0;
    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j <= b; j++)
        {
            for (int k = 0; k <= c; k++)
            {
                sum = 500 * i + 100 * j + 50 * k;
                if (sum == x)
                {
                    cnt++;
                    break;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
