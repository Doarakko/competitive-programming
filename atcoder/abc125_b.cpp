#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    vector<int> v(n), c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] - c[i] > 0)
        {
            sum += v[i] - c[i];
        }
    }
    cout << sum << endl;
}
