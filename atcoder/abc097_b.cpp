#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char *argv[])
{
    int x;
    cin >> x;

    int ans = -1;
    for (int i = x; i >= 1; i--)
    {
        for (int j = sqrt(i); j >= 2; j--)
        {
            if (i % j == 0)
            {
                double y = i;
                bool flag = true;
                while (y != 1.0 && flag)
                {
                    y /= j;
                    if (y < 1.0)
                    {
                        flag = false;
                    }
                }
                if (flag && ans < i)
                {
                    ans = i;
                }
            }
        }
    }
    if (ans == -1)
    {
        ans = 1;
    }
    cout << ans << endl;
    return 0;
}
