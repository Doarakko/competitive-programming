#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, m, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (m < 80)
        {
            sum += 80 - m;
        }
    }
    cout << sum << endl;
}
