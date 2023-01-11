#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    int n, x, a[n], b[n], c[n - 1];
    // input
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a[i] = x - 1;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        cin >> c[i];
    }

    // calculate
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += b[a[i]];

        if (i > 0 && a[i] > 0 && a[i] == a[i - 1] + 1)
        {
            sum += c[a[i - 1]];
        }
    }

    cout << sum << endl;
}
