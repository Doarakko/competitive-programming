#include <iostream>
#include <vector>

#define vsort(v) sort((v).begin(), (v).end())

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vsort(v);

    int min = INT_MAX;
    for (int i = 0; i + k - 1 < n; i++)
    {
        if (v[i + k - 1] - v[i] < min)
        {
            min = v[i + k - 1] - v[i];
        }
    }
    cout << min << endl;
}
