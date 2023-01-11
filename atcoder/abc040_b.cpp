#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    int min = 1000000;
    for (int i = 1; i <= n / 2 + 1; i++)
    {
        for (int j = 1; j <= n / 2 + 1; j++)
        {
            if (i * j > n)
            {
                break;
            }
            else if (min > abs(i - j) + n - (i * j))
            {
                min = abs(i - j) + n - (i * j);
            }
        }
    }
    cout << min << endl;
}
