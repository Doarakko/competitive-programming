#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, d, x;
    cin >> n >> d >> x;
    int a, sum = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v[i] = a;
        if (d % a == 0)
        {
            sum += (d / a);
        }
        else
        {
            sum += (1 + d / a);
        }
    }
    sum += x;
    cout << sum << endl;
    return 0;
}
